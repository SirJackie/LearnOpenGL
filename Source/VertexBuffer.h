#ifndef __LearnOpenGL_VertexBuffer__
#define __LearnOpenGL_VertexBuffer__

#include <GL/glew.h>
#include "BasicDataTypeDeclarations.h"
#include "ErrorHandling.h"

class VertexBuffer{
private:
    ui32 m_RendererID;
public:
    VertexBuffer();
    VertexBuffer(const void* data, ui32 size);
    ~VertexBuffer();

    void Bind();
    void Unbind();
};

#endif
