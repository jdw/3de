#include "PixelToaster.h"
#include <iostream>
#include <math.h>
#include "jdw_3dmath.h"
#include "cube.h"
#include "hud.h"

using namespace PixelToaster;

const float pi = 3.14159265f;
const float e = 0.01f; // Angle
TrueColorPixel clr(0, 87, 87);
const v3<float> cp(0.0f, 0.0f, 1.0f); // Cam pos (the screen)
const v3<float> cr(0.0f, 0.0f, -1.0f); // Cam rot
v3<float> v(0.0f, 0.0f, 1.0f); // Viewers pos (POV)
v3<float> POV(cp.x + v.x, cp.y + v.y, cp.z + v.z);
const int width = 640;
const int height = 480;
const float halfWidth = float(width) / 2.0f;
const float halfHeight = float(height) / 2.0f;
#define FPS 0.0166666667f
vector<TrueColorPixel> pixels(width * height);

void PutPixel(const int& in_x, const int& in_y) {
	if (!(in_x >= 0.0f && in_x < width)) return;
	if (!(in_y >= 0.0f && in_y < height)) return;

	if ((pixels[in_x + in_y * width].r + clr.r) > 255) pixels[in_x + in_y * width].r = 255;
	else pixels[in_x + in_y * width].r += clr.r;
	
	if (pixels[in_x + in_y * width].g + clr.g > 255) pixels[in_x + in_y * width].g = 255;
	else pixels[in_x + in_y * width].g += clr.g;
	
	if (pixels[in_x + in_y * width].b + clr.b > 255) pixels[in_x + in_y * width].b = 255;
	else pixels[in_x + in_y * width].b += clr.b;
}

void drawLine(const int& x1, const int& y1, const int& x2, const int& y2) {
	//cout << x1 << "," << y1 << " " << x2 << "," << y2 << endl;
	int deltax = abs(x2 - x1);        // The difference between the x's
	int deltay = abs(y2 - y1);        // The difference between the y's
	int x = x1;                       // Start x off at the first pixel
	int y = y1;                       // Start y off at the first pixel
	int xinc1 = 0;
	int xinc2 = 0;
	int yinc1 = 0;
	int yinc2 = 0;
	int den = 0;
	int num = 0;
	int numadd = 0;
	int numpixels = 0;
	int tmp = 0;
	int curpixel = 0;
	
	if (x2 >= x1) { // The x-values are increasing
		xinc1 = 1;
		xinc2 = 1;
	}
	else { // The x-values are decreasing
		xinc1 = -1;
		xinc2 = -1;
	}

	if (y2 >= y1) { // The y-values are increasing
		yinc1 = 1;
		yinc2 = 1;
	}
	else { // The y-values are decreasing
		yinc1 = -1;
		yinc2 = -1;
	}

	if (deltax >= deltay) { // There is at least one x-value for every y-value
		xinc1 = 0;                  // Don't change the x when numerator >= denominator
		yinc2 = 0;                  // Don't change the y for every iteration
		den = deltax;
		num = deltax / 2;
		numadd = deltay;
		numpixels = deltax;         // There are more x-values than y-values
	}
	else { // There is at least one y-value for every x-value
		xinc2 = 0;                  // Don't change the x for every iteration
		yinc1 = 0;                  // Don't change the y when numerator >= denominator
		den = deltay;
		num = deltay / 2;
		numadd = deltax;
		numpixels = deltay;         // There are more y-values than x-values
	}

	for (curpixel = 0; curpixel <= numpixels; curpixel++) {
		PutPixel(x, y);             // Draw the current pixel
		num += numadd;              // Increase the numerator by the top of the fraction
		if (num >= den)             // Check if numerator >= denominator
		{
			num -= den;               // Calculate the new numerator value
			x += xinc1;               // Change the x as appropriate
			y += yinc1;               // Change the y as appropriate
		}
		x += xinc2;                 // Change the x as appropriate
		y += yinc2;                 // Change the y as appropriate
	}
}

void calc(vertex<float>& in_v)	{
	v3<float> tmp(in_v.pos.x, in_v.pos.y, in_v.pos.z);
	v3<float> d(0.0f, 0.0f, 0.0f); // The cam transform
	float tmp_cosE = float(cos(e));
	float tmp_sinE = float(sin(e));
	
	/// Rotation
	// Round the x-axis
/*
	// http://www.geocities.com/SiliconValley/2151/math3d.html
	//pos.x = tmp.x;
	pos.y = cos(e) * pos.y - sin(e) * pos.z;
	pos.z = sin(e) * pos.y + cos(e) * pos.z;
*/
	// http://www.siggraph.org/education/materials/HyperGraph/modeling/mod_tran/3drota.htm
	//pos.x = pos.x;
	//in_v.pos.y = tmp_cosE * tmp.y - tmp_sinE * tmp.z;
	//in_v.pos.z = tmp_sinE * tmp.y + tmp_cosE * tmp.z;
	
	// Round the y-axis
	tmp.x = in_v.pos.x;
	tmp.y = in_v.pos.y;
	tmp.z = in_v.pos.z;
/*
	// http://www.geocities.com/SiliconValley/2151/math3d.html
	pos.x =  cos(e) * pos.x + sin(e) * pos.z;
	//pos.y = pos.y;
	pos.z = -sin(e) * pos.x +  cos(e) * pos.z;
*/
	// http://www.siggraph.org/education/materials/HyperGraph/modeling/mod_tran/3drota.htm
	//in_v.pos.x = tmp_sinE * tmp.z + tmp_cosE * tmp.x;
	//pos.y = pos.y
	//in_v.pos.z = tmp_cosE * tmp.z - tmp_sinE * tmp.x;
	
	// Round the z-axis
	tmp.x = in_v.pos.x;
	tmp.y = in_v.pos.y;
	tmp.z = in_v.pos.z;
/*
	// http://www.geocities.com/SiliconValley/2151/math3d.html
	pos.x = cos(e) * pos.x - sin(e) * pos.y;
	pos.y = sin(e) * pos.x + cos(e) * pos.y;
	//pos.z = pos.z;
*/
	// http://www.siggraph.org/education/materials/HyperGraph/modeling/mod_tran/3drota.htm
	//in_v.pos.x = tmp_cosE * tmp.x - tmp_sinE * tmp.y;
	//in_v.pos.y = tmp_sinE * tmp.x + tmp_cosE * tmp.y;
	//pos.z = pos.z;
	
	/// Projection
	d.x = cos(cr.y) * (sin(cr.z) * (in_v.pos.y - cp.y) + cos(cr.z) * (in_v.pos.x - cp.x)) - sin(cr.y) * (in_v.pos.z - cp.z);
	d.y = sin(cr.x) * (cos(cr.y) * (in_v.pos.z - cp.z) + sin(cr.y) * (sin(cr.z) * (in_v.pos.y - cp.y) + cos(cr.z) * (in_v.pos.x - cp.x))) + cos(cr.x) * (cos(cr.z) * (in_v.pos.y - cp.y) - sin(cr.z) * (in_v.pos.x - cp.x));
	d.z = cos(cr.x) * (cos(cr.y) * (in_v.pos.z - cp.z) + sin(cr.y) * (sin(cr.z) * (in_v.pos.y - cp.y) + cos(cr.z) * (in_v.pos.x - cp.x))) - sin(cr.x) * (cos(cr.z) * (in_v.pos.y - cp.y) - sin(cr.z) * (in_v.pos.x - cp.x));
	
	if (d.z != 0.0f) {
		in_v.scr.x = halfWidth  + halfWidth  * ((d.x - v.x) * (v.z / d.z));
		in_v.scr.y = halfHeight + halfHeight * ((d.y - v.y) * (v.z / d.z));
	}
	
	in_v.calculated = true;
}

int main() {
	Display display( "JDW's cube", width, height, Output::Windowed);
	Timer timer;
	double t0 = timer.time();
	Cube* pCube = new Cube(v3<float>(0.0f, 0.0f, 0.0f), 1.0f, clr);
	HUD* pHUD = new HUD();

int i = 0;
vertex<float>* pTmp = pCube->GetVertexList();
while (pTmp != (vertex<float>*)0) {
			cout << ++i << ": " << pTmp->pos.x << ", " << pTmp->pos.y << ", " << pTmp->pos.z << endl;
			pTmp = pTmp->pNext;
		}
		
	while (display.open()) {
		if (timer.time() - t0 < FPS) timer.wait(FPS - (timer.time() - t0));
		t0 = timer.time();
		
		vertex<float>* pTmp = pCube->GetVertexList();
		while (pTmp != (vertex<float>*)0) {
			calc((*pTmp));
			pTmp = pTmp->pNext;
		}
		
		for (int i = 0; i < pCube->GetPolyCount(); i++) {
			if (v.DP((*pCube->GetPoly(i)).GetNormal()) < 0) continue; // Back-face culling
			
			clr = (*pCube->GetPoly(i)).clr;
			drawLine((*pCube->GetPoly(i)).o->scr.x, (*pCube->GetPoly(i)).o->scr.y, (*pCube->GetPoly(i)).a->scr.x, (*pCube->GetPoly(i)).a->scr.y);
			drawLine((*pCube->GetPoly(i)).o->scr.x, (*pCube->GetPoly(i)).o->scr.y, (*pCube->GetPoly(i)).b->scr.x, (*pCube->GetPoly(i)).b->scr.y);
			drawLine((*pCube->GetPoly(i)).a->scr.x, (*pCube->GetPoly(i)).a->scr.y, (*pCube->GetPoly(i)).b->scr.x, (*pCube->GetPoly(i)).b->scr.y);
		}

		display.update(pixels);

		for (int i = 0; i < pixels.size(); i++) {
			pixels[i].r = 0;
			pixels[i].g = 0;
			pixels[i].b = 0;
		}
/*
		int delay = 20;
		for (int i = 0; i < pixels.size(); i++) {
			if (pixels[i].r != 0) {
				if (pixels[i].r - clr.r / delay < 0) pixels[i].r = 0;
				else pixels[i].r -= clr.r / delay;
			}
			
			if (pixels[i].g != 0) {
				if (pixels[i].g - clr.g / delay < 0) pixels[i].g = 0;
				else pixels[i].g -= clr.g / delay;
			}
			
			if (pixels[i].b != 0) {
				if (pixels[i].b - clr.b / delay < 0) pixels[i].b = 0;
				else pixels[i].b -= clr.b / delay;
			}
		}
*/		
	}
	
	delete pCube;
	delete pHUD;
}
