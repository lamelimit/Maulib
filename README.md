# Maulib
A header only graphics framework made using OpenGL and C

# DEPENDENCIES
This library requires GLFW 3.3+ and GLAD, other than that it is completely standalone 


# USAGE
In order to use this library you have to include the header in a c file with MAU_LIB_IMP defined
for example:
```
#define MAU_LIB_IMP
#include "Maulib.h"
//you should be able to do #include "MauLib.h" in any file in your project and have it work!
```
You can also specify a graphics context by defining it before you include it
The current values that definition can be are:
```
#define MAU_GL_GRAPHICS_CONTEXT //creates an OpenGL 3.3 graphics context
```
if none are defined it will defualt to an OpenGL 3.3 graphics context
So an example of defining an OpenGL graphics context would be:
```
#define MAU_GL_GRAPHICS_CONTEXT
#define MAU_LIB_IMP
#include "MauLib.h"
```


