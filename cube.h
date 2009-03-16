#ifndef JDW_CUBE
#define JDW_CUBE

#include "jdw_3dmath.h"
#include "PixelToaster.h"

using namespace PixelToaster;

class Cube {
public:
	Cube(v3<float>, float, TrueColorPixel);
	~Cube();
	
	const v3<float>& GetOrigo() { return o; }
	float GetSide() { return sides; }
	float GetSize() { return sides * sides * sides; }
	const TrueColorPixel& GetColor() { return clr; }
	poly<float>** const GetPolys() { return pPolys; }
	poly<float>* const GetPoly(int i) { return pPolys[i]; }
	int GetVertexCount() { return sizeof((*pVertexList)) / sizeof(vertex<float>); }
	int GetPolyCount() { return sizeof((pPolys)) / sizeof(poly<float>*); }
	vertex<float>* GetVertexList() { return pVertexList; }
	// get polycount
	
private:
	vertex<float>* AddVertex(v3<float>);
	v3<float> o;
	float sides;
	TrueColorPixel clr;
	poly<float>* pPolys[12];
	vertex<float>* pVertexList;
	
};
#endif
