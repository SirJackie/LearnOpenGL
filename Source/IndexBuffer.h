#ifndef __LearnOpenGL_IndexBuffer__
#define __LearnOpenGL_IndexBuffer__

#include <GL/glew.h>
#include "BasicDataTypeDeclarations.h"
#include "ErrorHandling.h"

class IndexBuffer{
private:
    // Banned operations
    IndexBuffer(IndexBuffer& vb);
    const IndexBuffer& operator=(const IndexBuffer& vb);

public:
    ui32 m_RendererID;
    ui32 m_Count;

    IndexBuffer();
    ~IndexBuffer();
    
    void Init(const void* data, ui32 count);
    void Bind();
    void Unbind();
};

#endif
