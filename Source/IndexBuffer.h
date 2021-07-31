#ifndef __LearnOpenGL_IndexBuffer__
#define __LearnOpenGL_IndexBuffer__

#include <GL/glew.h>
#include "BasicDataTypeDeclarations.h"
#include "ErrorHandling.h"

class IndexBuffer{
private:
    ui32 m_RendererID;
    ui32 m_Count;
public:
    IndexBuffer();
    IndexBuffer(const void* data, ui32 count);
    ~IndexBuffer();

    void Bind();
    void Unbind();

    inline ui32 GetCount() { return m_Count; }
};

#endif
