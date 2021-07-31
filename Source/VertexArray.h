#ifndef __LearnOpenGL_VertexArray__
#define __LearnOpenGL_VertexArray__

#include <GL/glew.h>
#include "BasicDataTypeDeclarations.h"
#include "ErrorHandling.h"
#include "VertexBuffer.h"
#include "VertexArray.h"
#include "VertexBufferLayout.h"

class VertexArray{
private:
    ui32 m_RendererID;
public:
    VertexArray();
    ~VertexArray();

    void AddBuffer(VertexBuffer& vb, VertexBufferLayout& layout);

    void Bind() const;
    void Unbind() const;
};

#endif
