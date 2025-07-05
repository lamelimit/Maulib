#include "MauLib.h"
#include <stdio.h>



int main() {
	struct MauContext* ctx = mauCreateContext(800, 450, "window");
	if (ctx == NULL) {
		printf("Ctx is NULL");
		mauDestroyContext(ctx);
		return -1;
	}
	MauVec3 triPos = mauCreateVec3FromValues(0.0f, 0.0f, 0.0f);
	MauVec4 triColor = mauCreateVec4FromValues(1.0f, 0.0f, 0.0f, 1.0f);
	MauVec2 triDim = mauCreateVec2FromValues(0.1f, 0.1f);
	MauColoredTriangle t = mauCreateColoredTriangle(&triPos, &triColor, &triDim);
	
	MauVec3 tP = mauCreateVec3FromValues(0.5f, 0.5f, 0.0f);
	MauVec4 tC = mauCreateVec4FromValues(0.0f, 1.0f, 0.0f, 1.0f);
	MauVec2 tD = mauCreateVec2FromValues(0.1f, 0.1f);
	MauColoredTriangle tr = mauCreateColoredTriangle(&tP, &tC, &tD);
	

	MauVec3 movingTriPos = mauCreateVec3FromValues(0.0f, 0.0f, 0.0f);
	MauVec4 movingTriColor = mauCreateVec4FromValues(0.4f, 0.2f, 0.0f, 1.0f);
	MauVec2 movingTriDim = mauCreateVec2FromValues(.1f, .1f);
	

	while (!mauWindowShouldClose(ctx)) {
		if (mauGetKey(MAU_KEY_RIGHT, ctx)) {
			mauVec3SetX(&movingTriPos, movingTriPos.x + 0.01f);
			
		}
		else if (mauGetKey(MAU_KEY_LEFT, ctx)) {
			mauVec3SetX(&movingTriPos, movingTriPos.x - 0.01f);
		}
		else if (mauGetKey(MAU_KEY_UP, ctx)) {
			mauVec3SetY(&movingTriPos, movingTriPos.y + .01f);
		}
		else if (mauGetKey(MAU_KEY_DOWN, ctx)) {
			mauVec3SetY(&movingTriPos, movingTriPos.y - .01f);
		}
		MauColoredTriangle movingTri = mauCreateColoredTriangle(&movingTriPos, &movingTriColor, &movingTriDim);
		mauBeginDrawing(ctx);
		mauClearColor(MAU_BLACK);
		mauDrawTriangleColor(&t, ctx);
		mauDrawTriangleColor(&tr, ctx);
		mauDrawTriangleColor(&movingTri, ctx);
		mauEndDrawing(ctx);
	}
	mauDestroyContext(ctx);
}

