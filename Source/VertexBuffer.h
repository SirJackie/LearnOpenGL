#ifndef __LearnOpenGL_VertexBuffer__
#define __LearnOpenGL_VertexBuffer__

#include <GL/glew.h>
#include "BasicDataTypeDeclarations.h"
#include "ErrorHandling.h"

class VertexBuffer{
public:
    ui32 m_RendererID;

    VertexBuffer();
    VertexBuffer(VertexBuffer& vb);
    VertexBuffer(const void* data, ui32 size);
    ~VertexBuffer();
    const VertexBuffer& operator=(const VertexBuffer& rightValue);

    void Bind();
    void Unbind();
    ui32 vboCreator(const void* data, ui32 size);
};

#endif
