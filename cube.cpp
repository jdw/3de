#include "cube.h"

Cube::Cube(const v3<float> in_o, const float in_sides, const TrueColorPixel in_clr) {
	this->o = in_o;
	this->sides = in_sides;
	this->clr = in_clr;
	this->pVertexList = (vertex<float>*)0;
	float halfSide = this->sides / 2.0f;
	
	this->pPolys[0] = new poly<float>( // Front plane
		AddVertex(v3<float>(o.x - halfSide, o.y - halfSide,  o.z + halfSide)),
		AddVertex(v3<float>(o.x + halfSide, o.y - halfSide,  o.z + halfSide)),
		AddVertex(v3<float>(o.x + halfSide, o.y + halfSide,  o.z + halfSide)));
	this->pPolys[1] = new poly<float>(
		AddVertex(v3<float>(o.x + halfSide, o.y + halfSide,  o.z + halfSide)),
		AddVertex(v3<float>(o.x - halfSide, o.y + halfSide,  o.z + halfSide)),
		AddVertex(v3<float>(o.x - halfSide, o.y - halfSide,  o.z + halfSide)));
	
	this->pPolys[2] = new poly<float>( // Back plane
		AddVertex(v3<float>(o.x + halfSide, o.y - halfSide,  o.z - halfSide)),
		AddVertex(v3<float>(o.x - halfSide, o.y - halfSide,  o.z - halfSide)),
		AddVertex(v3<float>(o.x - halfSide, o.y + halfSide,  o.z - halfSide)));
	this->pPolys[3] = new poly<float>(
		AddVertex(v3<float>(o.x - halfSide, o.y + halfSide,  o.z - halfSide)),
		AddVertex(v3<float>(o.x + halfSide, o.y + halfSide,  o.z - halfSide)),
		AddVertex(v3<float>(o.x + halfSide, o.y - halfSide,  o.z - halfSide)));
	
	this->pPolys[4] = new poly<float>( // Right plane
		AddVertex(v3<float>(o.x + halfSide, o.y - halfSide,  o.z + halfSide)),
		AddVertex(v3<float>(o.x + halfSide, o.y - halfSide,  o.z - halfSide)),
		AddVertex(v3<float>(o.x + halfSide, o.y + halfSide,  o.z - halfSide)));
	this->pPolys[5] = new poly<float>(
		AddVertex(v3<float>(o.x + halfSide, o.y + halfSide,  o.z - halfSide)),
		AddVertex(v3<float>(o.x + halfSide, o.y + halfSide,  o.z + halfSide)),
		AddVertex(v3<float>(o.x + halfSide, o.y - halfSide,  o.z + halfSide)));

	this->pPolys[6] = new poly<float>( // Left plane
		AddVertex(v3<float>(o.x - halfSide, o.y - halfSide,  o.z + halfSide)),
		AddVertex(v3<float>(o.x - halfSide, o.y + halfSide,  o.z + halfSide)),
		AddVertex(v3<float>(o.x - halfSide, o.y + halfSide,  o.z - halfSide)));
	this->pPolys[7] = new poly<float>(
		AddVertex(v3<float>(o.x - halfSide, o.y + halfSide,  o.z - halfSide)),
		AddVertex(v3<float>(o.x - halfSide, o.y - halfSide,  o.z - halfSide)),
		AddVertex(v3<float>(o.x - halfSide, o.y - halfSide,  o.z + halfSide)));

	this->pPolys[8] = new poly<float>( // Upper plane
		AddVertex(v3<float>(o.x + halfSide, o.y + halfSide,  o.z + halfSide)),
		AddVertex(v3<float>(o.x + halfSide, o.y + halfSide,  o.z - halfSide)),
		AddVertex(v3<float>(o.x - halfSide, o.y + halfSide,  o.z - halfSide)));
	this->pPolys[9] = new poly<float>(
		AddVertex(v3<float>(o.x - halfSide, o.y + halfSide,  o.z - halfSide)),
		AddVertex(v3<float>(o.x - halfSide, o.y + halfSide,  o.z + halfSide)),
		AddVertex(v3<float>(o.x + halfSide, o.y + halfSide,  o.z + halfSide)));
		
	this->pPolys[10] = new poly<float>( // Lower plane
		AddVertex(v3<float>(o.x + halfSide, o.y - halfSide,  o.z + halfSide)),
		AddVertex(v3<float>(o.x - halfSide, o.y - halfSide,  o.z + halfSide)),
		AddVertex(v3<float>(o.x - halfSide, o.y - halfSide,  o.z - halfSide)));
	this->pPolys[11] = new poly<float>(
		AddVertex(v3<float>(o.x - halfSide, o.y - halfSide,  o.z - halfSide)),
		AddVertex(v3<float>(o.x + halfSide, o.y - halfSide,  o.z - halfSide)),
		AddVertex(v3<float>(o.x + halfSide, o.y - halfSide,  o.z + halfSide)));

}

Cube::~Cube() {
	for(int i = 0; i < 12; ++i) {
		delete pPolys[i];
	}	
}

// --- PRiVATE ---
vertex<float>* Cube::AddVertex(v3<float> in_v) {
	
	vertex<float>* pTmp = pVertexList;
	
	if (pTmp == (vertex<float>*)0) { // First time
		pTmp = new vertex<float>();
		pTmp->pos.x = in_v.x;
		pTmp->pos.y = in_v.y;
		pTmp->pos.z = in_v.z;
		
		pVertexList = pTmp;
		
		return pTmp;
	}
		
	
	
	while (pTmp->pNext != (vertex<float>*)0) {
		if ((pTmp->pos.x == in_v.x) &&
		    (pTmp->pos.y == in_v.y) &&
		    (pTmp->pos.z == in_v.z))
			return pTmp;
		
		pTmp = pTmp->pNext;
	}
	
	if ((pTmp->pos.x == in_v.x) &&
		  (pTmp->pos.y == in_v.y) &&
		  (pTmp->pos.z == in_v.z))
		return pTmp;
	
	pTmp->pNext = new vertex<float>();
	pTmp = pTmp->pNext;
	
	pTmp->pos.x = in_v.x;
	pTmp->pos.y = in_v.y;
	pTmp->pos.z = in_v.z;
	
	return pTmp;
}
