#ifndef __LearnOpenGL_ErrorHandling__
#define __LearnOpenGL_ErrorHandling__

#include <GL/glew.h>
#include "BasicDataTypeDeclarations.h"

// Error Handling Functions
string GLGetEnumString(GLenum value);
void GLClearError();
bool GLLogError(const char* function, const char* file, int line);
#define GLCall(x) GLClearError();x;Assert(GLLogError(#x, __FILE__, __LINE__))

#endif
