#include "IndexBuffer.h"

IndexBuffer::IndexBuffer(IndexBuffer& vb) {
	// Banned Operation
	;
}

const IndexBuffer& IndexBuffer::operator=(const IndexBuffer& vb)
{
	// Banned Operation
	return IndexBuffer();
}

IndexBuffer::IndexBuffer()
{
	m_RendererID = 0;
}

IndexBuffer::~IndexBuffer()
{
	GLCall(glDeleteBuffers(1, &m_RendererID));
}

void IndexBuffer::Init(const void* data, ui32 count)
{
	glGenBuffers(1, &m_RendererID);
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, m_RendererID);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, count * sizeof(ui32), data, GL_STATIC_DRAW);
}

void IndexBuffer::Bind()
{
	GLCall(glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, m_RendererID));
}

void IndexBuffer::Unbind()
{
	GLCall(glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0));
}
