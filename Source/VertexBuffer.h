#ifndef __LearnOpenGL_VertexBuffer__
#define __LearnOpenGL_VertexBuffer__

#include <GL/glew.h>
#include "BasicDataTypeDeclarations.h"
#include "ErrorHandling.h"

class VertexBuffer{
private:
    // Banned operations
    VertexBuffer(VertexBuffer& vb);
    const VertexBuffer& operator=(const VertexBuffer& vb);

public:
    ui32 m_RendererID;

    VertexBuffer();
    ~VertexBuffer();
    
    void Init(const void* data, ui32 size);
    void Bind();
    void Unbind();
};

#endif
