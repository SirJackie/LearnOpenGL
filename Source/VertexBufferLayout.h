#ifndef __LearnOpenGL_VertexBufferLayout__
#define __LearnOpenGL_VertexBufferLayout__

#include <GL/glew.h>
#include "BasicDataTypeDeclarations.h"
#include "ErrorHandling.h"

struct VertexBufferElement{
    ui32 count;
    ui32 type;
    ui32 normalized;

    static ui32 GetSizeOfType(unsigned int type){
        switch (type){
            case GL_FLOAT:          return 4;
            case GL_UNSIGNED_INT:   return 4;
            case GL_UNSIGNED_BYTE:  return 1;
        }
        Assert(false);
        return 0;
    }
};

class VertexBufferLayout{
private:
    vector<VertexBufferElement> m_Elements;
    ui32 m_Stride;
public:
    VertexBufferLayout()
        : m_Stride(0) {}

    void PushF32(ui32 count)
    {
        m_Elements.push_back({GL_FLOAT, count, GL_FALSE});
        m_Stride += VertexBufferElement::GetSizeOfType(GL_FLOAT);
    }

    void PushUI32(ui32 count)
    {
        m_Elements.push_back({GL_UNSIGNED_INT, count, GL_FALSE});
        m_Stride += VertexBufferElement::GetSizeOfType(GL_UNSIGNED_INT);
    }

    void PushUI8(ui32 count)
    {
        m_Elements.push_back({GL_UNSIGNED_BYTE, count, GL_TRUE});
        m_Stride += VertexBufferElement::GetSizeOfType(GL_UNSIGNED_BYTE);
    }

    inline const vector<VertexBufferElement>& GetElements() const { return m_Elements; }
    inline ui32 GetStride() const { return m_Stride; }
};

#endif
