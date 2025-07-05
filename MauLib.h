#ifndef MAU_LIB_H
#define MAU_LIB_H

#if (!defined(MAU_OPENGL_GRAPHICS_CONTEXT))
#define MAU_OPENGL_GRAPHICS_CONTEXT
#endif

typedef struct MauContext MauContext;
typedef struct MauVec3 {
	float x;
	float y;
	float z;
}MauVec3;
typedef struct MauVec4 {
	float x;
	float y;
	float z;
	float w;
}MauVec4;
typedef struct MauVec2 {
	float x;
	float y;
}MauVec2;
typedef struct MauTriangleColor {
	MauVec3 pos;
	MauVec4 color;
	MauVec2 dim;
}MauTriangleColor;

#define MAU_RED {1.0f, 0.0f, 0.0f}
#define MAU_GREEN {0.0f, 1.0f, 0.0f}
#define MAU_BLUE {0.0f, 0.0f, 1.0f}
#define MAU_BLACK 0.0f, 0.0f, 0.0f
#define MAU_TRUE 1
#define MAU_FALSE 0

#ifndef MAU_DEFAULT_VERT_COUNT
#define MAU_DEFAULT_VERT_COUNT 1000
#endif
//just copy and pasted from GLFW.h, so all credit for these macros goes to them
//really cool and nice windowing system, if you ever want to use raw opengl I suggest you use them for the window/keyboard input
//here is the github repo: https://github.com/glfw/glfw
//here is their website: https://www.glfw.org/download and https://www.glfw.org/
//and here is a good website for learning opengl: https://learnopengl.com/
#define MAU_KEY_SPACE              32
#define MAU_KEY_APOSTROPHE         39  /* ' */
#define MAU_KEY_COMMA              44  /* , */
#define MAU_KEY_MINUS              45  /* - */
#define MAU_KEY_PERIOD             46  /* . */
#define MAU_KEY_SLASH              47  /* / */
#define MAU_KEY_0                  48
#define MAU_KEY_1                  49
#define MAU_KEY_2                  50
#define MAU_KEY_3                  51
#define MAU_KEY_4                  52
#define MAU_KEY_5                  53
#define MAU_KEY_6                  54
#define MAU_KEY_7                  55
#define MAU_KEY_8                  56
#define MAU_KEY_9                  57
#define MAU_KEY_SEMICOLON          59  /* ; */
#define MAU_KEY_EQUAL              61  /* = */
#define MAU_KEY_A                  65
#define MAU_KEY_B                  66
#define MAU_KEY_C                  67
#define MAU_KEY_D                  68
#define MAU_KEY_E                  69
#define MAU_KEY_F                  70
#define MAU_KEY_G                  71
#define MAU_KEY_H                  72
#define MAU_KEY_I                  73
#define MAU_KEY_J                  74
#define MAU_KEY_K                  75
#define MAU_KEY_L                  76
#define MAU_KEY_M                  77
#define MAU_KEY_N                  78
#define MAU_KEY_O                  79
#define MAU_KEY_P                  80
#define MAU_KEY_Q                  81
#define MAU_KEY_R                  82
#define MAU_KEY_S                  83
#define MAU_KEY_T                  84
#define MAU_KEY_U                  85
#define MAU_KEY_V                  86
#define MAU_KEY_W                  87
#define MAU_KEY_X                  88
#define MAU_KEY_Y                  89
#define MAU_KEY_Z                  90
#define MAU_KEY_LEFT_BRACKET       91  /* [ */
#define MAU_KEY_BACKSLASH          92  /* \ */
#define MAU_KEY_RIGHT_BRACKET      93  /* ] */
#define MAU_KEY_GRAVE_ACCENT       96  /* ` */
#define MAU_KEY_WORLD_1            161 /* non-US #1 */
#define MAU_KEY_WORLD_2            162 /* non-US #2 */

/* Function keys */
#define MAU_KEY_ESCAPE             256
#define MAU_KEY_ENTER              257
#define MAU_KEY_TAB                258
#define MAU_KEY_BACKSPACE          259
#define MAU_KEY_INSERT             260
#define MAU_KEY_DELETE             261
#define MAU_KEY_RIGHT              262
#define MAU_KEY_LEFT               263
#define MAU_KEY_DOWN               264
#define MAU_KEY_UP                 265
#define MAU_KEY_PAGE_UP            266
#define MAU_KEY_PAGE_DOWN          267
#define MAU_KEY_HOME               268
#define MAU_KEY_END                269
#define MAU_KEY_CAPS_LOCK          280
#define MAU_KEY_SCROLL_LOCK        281
#define MAU_KEY_NUM_LOCK           282
#define MAU_KEY_PRINT_SCREEN       283
#define MAU_KEY_PAUSE              284
#define MAU_KEY_F1                 290
#define MAU_KEY_F2                 291
#define MAU_KEY_F3                 292
#define MAU_KEY_F4                 293
#define MAU_KEY_F5                 294
#define MAU_KEY_F6                 295
#define MAU_KEY_F7                 296
#define MAU_KEY_F8                 297
#define MAU_KEY_F9                 298
#define MAU_KEY_F10                299
#define MAU_KEY_F11                300
#define MAU_KEY_F12                301
#define MAU_KEY_F13                302
#define MAU_KEY_F14                303
#define MAU_KEY_F15                304
#define MAU_KEY_F16                305
#define MAU_KEY_F17                306
#define MAU_KEY_F18                307
#define MAU_KEY_F19                308
#define MAU_KEY_F20                309
#define MAU_KEY_F21                310
#define MAU_KEY_F22                311
#define MAU_KEY_F23                312
#define MAU_KEY_F24                313
#define MAU_KEY_F25                314
#define MAU_KEY_KP_0               320
#define MAU_KEY_KP_1               321
#define MAU_KEY_KP_2               322
#define MAU_KEY_KP_3               323
#define MAU_KEY_KP_4               324
#define MAU_KEY_KP_5               325
#define MAU_KEY_KP_6               326
#define MAU_KEY_KP_7               327
#define MAU_KEY_KP_8               328
#define MAU_KEY_KP_9               329
#define MAU_KEY_KP_DECIMAL         330
#define MAU_KEY_KP_DIVIDE          331
#define MAU_KEY_KP_MULTIPLY        332
#define MAU_KEY_KP_SUBTRACT        333
#define MAU_KEY_KP_ADD             334
#define MAU_KEY_KP_ENTER           335
#define MAU_KEY_KP_EQUAL           336
#define MAU_KEY_LEFT_SHIFT         340
#define MAU_KEY_LEFT_CONTROL       341
#define MAU_KEY_LEFT_ALT           342
#define MAU_KEY_LEFT_SUPER         343
#define MAU_KEY_RIGHT_SHIFT        344
#define MAU_KEY_RIGHT_CONTROL      345
#define MAU_KEY_RIGHT_ALT          346
#define MAU_KEY_RIGHT_SUPER        347
#define MAU_KEY_MENU               348

#define MAU_KEY_LAST               MAU_KEY_MENU


MauContext* mauCreateContext(int windowWidth, int windowHeight, const char* windowName);
void mauSetShaders(const char* vertShaderSource, const char* fragShaderSrc, MauContext* mctx);
void mauBeginDrawing(MauContext* mCtx);
void mauVec3SetX(MauVec3* v, float newX);
void mauVec3SetY(MauVec3* v, float newY);
void mauVec3SetZ(MauVec3* v, float newZ);
void mauVec4SetX(MauVec4* v, float newX);
void mauVec4SetY(MauVec4* v, float newY);
void mauVec4SetZ(MauVec4* v, float newZ);
void mauVec4SetW(MauVec4* v, float newW);
void mauVec2SetX(MauVec2* v, float newX);
void mauVec2SetY(MauVec2* v, float newY);
void mauPrintVec2(MauVec2* v, const char* vName);
void mauPrintVec3(MauVec3* v, const char* vName);
void mauPrintVec4(MauVec4* v, const char* vName);
MauVec3 mauVec3CrossProduct(MauVec3* v1, MauVec3* v2);
MauVec3 mauCreateVec3FromValues(float inX, float inY, float inZ);
MauVec4 mauCreateVec4FromValues(float inX, float inY, float inZ, float inW);
MauVec2 mauCreateVec2FromValues(float x, float y);
//the first vec3 is the posistion of the triangle, the vec4 is the color of the triangle, and the final vec2 is the x/y dimentions of the triangle
MauTriangleColor mauCreateTriangleColor(MauVec3* triPos, MauVec4* triColor,MauVec2* triDim);
float mauVec3DotProduct(MauVec3* v1, MauVec3* v2);
float mauVec4DotProduct(MauVec4* v1, MauVec4* v2);
float mauVec2DotProduct(MauVec2* v1, MauVec2* v2);
void mauDrawTriangleColor(MauTriangleColor *mTri, MauContext* mCtx);
void mauEndDrawing(MauContext* mCtx);
void mauClearColor(float r, float g, float b);
int mauWindowShouldClose(MauContext* mCtx);
int mauGetKey(int  key, MauContext* mCtx);
void mauDestroyContext(MauContext* mCtx);



#ifdef MAU_LIB_IMP
#include "glad/glad.h"
#include "GLFW/glfw3.h"
#include <stdio.h>

typedef struct MauShader {
	unsigned int id;
	const char* src;
	int type;
	int valid;
}MauShader;

typedef struct MauShaderParams {
	int type;
	const char* src;
}MauShaderParams;

typedef struct MauShaderProgram {
	MauShader vertShader;
	MauShader fragShader;
	unsigned int id;
	int valid;
}MauShaderProgram;
typedef struct MauVBO {
	unsigned int id;
	float vertices[MAU_DEFAULT_VERT_COUNT];
	int amountUsed;
}MauVBO;
typedef struct MauVAO {
	unsigned  int  id;
}MauVAO;
struct MauContext {
	GLFWwindow* p_Window;
	int windowWidth;
	int windowHeight;
	const char* windowTitle;
#ifdef MAU_OPENGL_GRAPHICS_CONTEXT
	MauShaderProgram shaderProgram;
	MauVAO defaultColorVAO;
	MauVBO defaultColorVBO;
	MauVAO defaultTexVAO;
	MauVBO defaultTexVBO;
#endif
};



MauTriangleColor mauCreateTriangleColor(MauVec3* triPos, MauVec4* triColor,MauVec2* triDim) {
	MauTriangleColor tri;
	tri.pos = *triPos;
	tri.color = *triColor;
	tri.dim = *triDim;
	return tri;
}
void mauPrintVec2(MauVec2* v, const char* vName) {
	printf("%c's x and y are: %f,%f", vName, v->x, v->y);
}
int mauVec2Equals(MauVec2* v1, MauVec2* v2) {
	if ((v1->x == v2->x) && (v1->y == v2->y)) {
		return MAU_TRUE;
	}
	return MAU_FALSE;
}
MauVec2 mauCreateVec2FromValues(float inX, float inY) {
	MauVec2 res;
	res.x = inX;
	res.y = inY;
	return res;
}
float mauVec2DotProduct(MauVec2* v1, MauVec2* v2) {
	return (v1->x * v2->x) + (v1->y * v2->y);
}
void mauVec2SetX(MauVec2* v, float newX) {
	v->x = newX;
}
void mauVec2SetY(MauVec2* v, float newY) {
	v->y = newY;
}

void mauPrintVec3(MauVec3* v, const char* vName) {
	printf("%c's x,y, and z are: %f,%f,%f", vName, v->x, v->y,v->z);
}
int mauVec3Equals(MauVec3* v1, MauVec3* v2) {
	if ((v1->x == v2->x) && (v1->y == v2->y) && (v1->z == v2->z)) {
		return MAU_TRUE;
	}
	return MAU_FALSE;
}

MauVec3 mauCreateVec3FromValues(float inX, float inY, float inZ) {
	MauVec3 res;
	res.x = inX;
	res.y = inY;
	res.z = inZ;
	return res;
}
float mauVec3DotProduct(MauVec3* v1, MauVec3* v2) {
	return (v1->x * v2->x) + (v1->y * v2->y) + (v1->z * v2->z);
}
MauVec3 mauVec3CrossProduct(MauVec3* v1, MauVec3* v2) {
	MauVec3 res;
	res.x = (v1->y * v2->z) - (v1->z * v2->y);
	res.y = (v1->z * v2->x) - (v1->x * v2->z);
	res.z = (v1->x * v2->y) - (v1->y * v2->x);
	return res;
}
void mauVec3SetX(MauVec3* v, float newX) {
	v->x = newX;
}
void mauVec3SetY(MauVec3* v, float newY) {
	v->y = newY;
}
void mauVec3SetZ(MauVec3* v, float newZ) {
	v->z = newZ;
}

void mauPrintVec4(MauVec4* v, const char* vName) {
	printf("%c's x,y,z, and w are: %f,%f,%f,%f", vName, v->x, v->y, v->z,v->w);
}
int mauVec4Equals(MauVec4* v1, MauVec4* v2) {
	if ((v1->x == v2->x) && (v1->y == v2->y) && (v1->z == v2->z) && (v1->w == v2->w)) {
		return MAU_TRUE;
	}
	return MAU_FALSE;
}
MauVec4 mauCreateVec4FromValues(float inX, float inY, float inZ,float inW) {
	MauVec4 res;
	res.x = inX;
	res.y = inY;
	res.z = inZ;
	res.w = inW;
	return res;
}
float mauVec4DotProduct(MauVec4* v1, MauVec4* v2) {
	return (v1->x * v2->x) + (v1->y * v2->y) + (v1->z * v2->z) + (v1->w * v2->w);
}
void mauVec4SetX(MauVec4* v, float newX) {
	v->x = newX;
}
void mauVec4SetY(MauVec4* v, float newY) {
	v->y = newY;
}
void mauVec4SetZ(MauVec4* v, float newZ) {
	v->z = newZ;
}
void mauVec4SetW(MauVec4* v, float newW) {
	v->w = newW;
}
const char* getDefaultVertShaderGL() {
	
	return "#version 330 core\n \
	layout(location = 0) in vec3 inPos; \n \
	layout(location = 1) in vec4 inColor; \n \
	out vec4 outColor; \n  \
	\n \
	\n \
	\n \
	void main() {\n \
	gl_Position = vec4(inPos, 1.0f); \n \
	outColor = inColor; \n \
	}\n\0";
}
const char* getDefaultFragShaderGL() {
	return "#version 330 core\n \
	in vec4 outColor; \n \
	out vec4 fragColor; \n \
	\n \
	\n \
	\n \
	void main() {\n \
	fragColor = outColor; \n \
	}\n\0";
}
const char* getDefaultVertShader(MauContext* mCtx) {
#ifdef MAU_OPENGL_GRAPHICS_CONTEXT
	
		return getDefaultVertShaderGL();
#endif
}
const char* getDefaultFragShader(MauContext* mCtx) {
	
#ifdef MAU_OPENGL_GRAPHICS_CONTEXT
		return getDefaultFragShaderGL();
#endif
}

void mauInitBuffers(MauContext* mCtx) {
#ifdef MAU_OPENGL_GRAPHICS_CONTEXT
	glGenVertexArrays(1, &mCtx->defaultColorVAO.id);
	glGenBuffers(1, &mCtx->defaultColorVBO.id);
	glBindVertexArray(mCtx->defaultColorVAO.id);
	glBindBuffer(GL_ARRAY_BUFFER, mCtx->defaultColorVBO.id);
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 7 * sizeof(float), (void*)0);
	glEnableVertexAttribArray(0);
	glVertexAttribPointer(1, 4, GL_FLOAT, GL_FALSE, 7 * sizeof(float), (void*)(3 * sizeof(float)));
	glEnableVertexAttribArray(1);
	glBindBuffer(GL_ARRAY_BUFFER, 0);
	glBindVertexArray(0);
	glGenBuffers(1, &mCtx->defaultTexVBO.id);
	glGenVertexArrays(1, &mCtx->defaultTexVAO.id);
	glBindVertexArray(mCtx->defaultTexVAO.id);
	glBindBuffer(GL_ARRAY_BUFFER, mCtx->defaultTexVBO.id);
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(float), (void*)0);
	glEnableVertexAttribArray(0);
	glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(float), (void*)(3 * sizeof(float)));
	glEnableVertexAttribArray(1);
	glBindBuffer(GL_ARRAY_BUFFER, 0);
	glBindVertexArray(0);
	mCtx->defaultColorVBO.amountUsed = 0;
	mCtx->defaultTexVBO.amountUsed = 0;
#endif
}

 MauContext* mauCreateContext(int windowWidth, int windowHeight, const char* windowName ) {
	//making it static so I can return the its memory adress since the lifetime of static objects  is for the entirety of the program, and thus it won't be automatically deleted at the end of the function
	static MauContext mCtx;
	
	
#ifdef MAU_OPENGL_GRAPHICS_CONTEXT
			glfwInit();
			glfwWindowHint(GLFW_VERSION_MAJOR, 3);
			glfwWindowHint(GLFW_VERSION_MINOR, 3);
			glfwWindowHint(GLFW_OPENGL_CORE_PROFILE, GLFW_OPENGL_CORE_PROFILE);
			
			
#endif
			
	

	mCtx.p_Window = glfwCreateWindow(windowWidth, windowHeight, windowName, NULL, NULL);
	if (mCtx.p_Window == NULL) {
		printf("COULD NOT CREATE WINDOW!\n");
		return NULL;
	}



	glfwMakeContextCurrent(mCtx.p_Window);
	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
		printf("Could not create GLAD\n");
		return NULL;
	}
	
	
	
	mauSetShaders(getDefaultVertShader(&mCtx), getDefaultFragShader(&mCtx), &mCtx);
	mauInitBuffers(&mCtx);

	printf("Created a window!\n");

	
	return &mCtx;
	



}
 void mauDrawTriangleColor(MauTriangleColor* mauTri,MauContext* mCtx) {
	
#ifdef MAU_OPENGL_GRAPHICS_CONTEXT
	
	 int am = mCtx->defaultColorVBO.amountUsed;
	
	 float vals[21] = {
		 mauTri->pos.x,mauTri->pos.y,mauTri->pos.z,														mauTri->color.x,mauTri->color.y,mauTri->color.z,mauTri->color.w,
		 (mauTri->pos.x - mauTri->dim.x),(mauTri->pos.y - mauTri->dim.y), mauTri->pos.z,				mauTri->color.x,mauTri->color.y,mauTri->color.z,mauTri->color.w,
		 (mauTri->pos.x + mauTri->dim.x), (mauTri->pos.y - mauTri->dim.y),mauTri->pos.z,				 mauTri->color.x,mauTri->color.y, mauTri->color.z,mauTri->color.w
	 };
	
	 for (int i = 0; i < 21; i++) {
		 mCtx->defaultColorVBO.vertices[am + i] = vals[i];
	 }
	
	
	
	
	 mCtx->defaultColorVBO.amountUsed += (7 * 3);

#endif
 }
 
 MauShader mauCreateShader(MauShaderParams shaderParams, MauContext* mctx) {
	 MauShader s;
#ifdef MAU_OPENGL_GRAPHICS_CONTEXT
	 s.type = shaderParams.type;
	 s.src = shaderParams.src;
	 s.id = glCreateShader(s.type);
	 glShaderSource(s.id, 1, &s.src, NULL);
	 glCompileShader(s.id);
	 {

		 glGetShaderiv(s.id, GL_COMPILE_STATUS, &s.valid);
		 if (!s.valid) {
			 char infoLog[512];
			 glGetShaderInfoLog(s.id, 512, NULL, infoLog);
			 printf("Could not create shader because %s", infoLog);
			 return;
		 }
	 }
	 return s;
#endif
		
	


 }



 MauShaderProgram mauCreateShaderProgram(MauShaderParams vertShaderParams, MauShaderParams fragShaderParams, MauContext* mCtx) {
	

	
	
#ifdef MAU_OPENGL_GRAPHICS_CONTEXT
	 MauShaderProgram sp;
	 sp.vertShader = mauCreateShader(vertShaderParams, mCtx);
	 sp.fragShader = mauCreateShader(fragShaderParams, mCtx);
	 if (!sp.vertShader.valid || !sp.fragShader.valid) {
		 sp.valid = MAU_FALSE;
		 return;
	 }
	 sp.id = glCreateProgram();
	 glAttachShader(sp.id, sp.vertShader.id);
	 glAttachShader(sp.id, sp.fragShader.id);
	 glLinkProgram(sp.id);
	 {
		 glGetProgramiv(sp.id, GL_LINK_STATUS, &sp.valid);
		 if (!sp.valid) {
			 char infolog[512];
			 glGetProgramInfoLog(sp.id, 512, NULL, infolog);
			 printf("could not create program because: %s", infolog);
			 return;
		 }
	 }
	 return sp;
#endif

 }

 

 void mauSetShaders(const char* vertShaderSrc, const char* fragShaderSrc, MauContext* mCtx) {
	 
#ifdef MAU_OPENGL_GRAPHICS_CONTEXT	
	 MauShaderProgram prog;
	 MauShaderParams vertSp;
	 MauShaderParams fragSp;
	 vertSp.src = vertShaderSrc;
	 vertSp.type = GL_VERTEX_SHADER;


	 fragSp.src = fragShaderSrc;
	 fragSp.type = GL_FRAGMENT_SHADER;

	 prog = mauCreateShaderProgram(vertSp, fragSp, mCtx);
	 if (!prog.valid) {
		 return;
	 }
	 mCtx->shaderProgram = prog;
#endif	
	
}


 int mauGetKey(int key, MauContext* mCtx) {
	 return glfwGetKey(mCtx->p_Window, key);
}

int mauWindowShouldClose(MauContext* mCtx) {
	return glfwWindowShouldClose(mCtx->p_Window);
}
void mauBeginDrawing(MauContext* mCtx) {
	
#ifdef MAU_OPENGL_GRAPHICS_CONTEXT
		glUseProgram(mCtx->shaderProgram.id);
		
#endif
}
void mauClearColor (float r, float g, float b) {
#ifdef MAU_OPENGL_GRAPHICS_CONTEXT
	glClearColor(r, g, b, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
#endif
}

void mauEndDrawing(MauContext* mCtx) {
#ifdef MAU_OPENGL_GRAPHICS_CONTEXT
	glBindVertexArray(mCtx->defaultColorVAO.id);
	glBindBuffer(GL_ARRAY_BUFFER, mCtx->defaultColorVBO.id);
	glBufferData(GL_ARRAY_BUFFER, mCtx->defaultColorVBO.amountUsed * sizeof(float), mCtx->defaultColorVBO.vertices, GL_STATIC_DRAW);
	
	glBindBuffer(GL_ARRAY_BUFFER, 0);
	glBindVertexArray(0);
	glBindVertexArray(mCtx->defaultColorVAO.id);
	glDrawArrays(GL_TRIANGLES, 0, mCtx->defaultColorVBO.amountUsed / 3);
	
	glBindVertexArray(0);
	mCtx->defaultColorVBO.amountUsed = 0;
#endif
	glfwSwapBuffers(mCtx->p_Window);
	glfwPollEvents();

}

void mauDestroyContext(MauContext* mCtx) {
#ifdef MAU_OPENGL_GRAPHICS_CONTEXT
	glDeleteBuffers(1, &mCtx->defaultColorVBO.id);
	glDeleteVertexArrays(1, &mCtx->defaultColorVAO.id);
	glDeleteBuffers(1, &mCtx->defaultTexVBO.id);
	glDeleteBuffers(1, &mCtx->defaultTexVAO.id);
#endif
	glfwTerminate();
}
#endif

#endif


