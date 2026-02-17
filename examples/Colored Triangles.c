#include "MauLib.h"
#include <stdio.h>



int main() {
	struct MauContext* ctx = mauCreateContext(800, 450, "window");
	if (ctx == NULL) {
		printf("Ctx is NULL");
		mauDestroyContext(ctx);
		return -1;
	}

	MauColoredTriangle tri = mauCreateColoredTriangle((vec3s){.x = 50.0f, .y =  450,  .z = 0.0f}, 
													 (vec4s){.x = 1.0f, .y = 0.0f, .z = 0.0f, .w = 1.0f }, 
												(vec2s){.x = 100.0f, .y = 100.0f }, MAU_TRUE);
	
	vec3s tP = { 100.0f, 100.0f, 0.0f };
	vec4s tC = { 0.0f, 1.0f, 0.0f, 1.0f };
	vec2s tD = { 50.0f, 50.0f };
	MauColoredTriangle t = mauCreateColoredTriangle(tP, tC, tD,MAU_FALSE);
	

	
	

	while (!mauWindowShouldClose(ctx)) {
		
		
		mauBeginDrawing(ctx);
		mauClearColor(MAU_BLACK);
		//mauDrawTriangleColor(&t, ctx);
		mauDrawTriangleColor(&tri,  ctx);
		mauDrawTriangleColor(&t, ctx);
		mauEndDrawing(ctx);
	}
	mauDestroyContext(ctx);
}

