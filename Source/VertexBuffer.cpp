#include "VertexBuffer.h"

VertexBuffer::VertexBuffer(VertexBuffer& vb) {
	// Banned Operation
	;
}

const VertexBuffer& VertexBuffer::operator=(const VertexBuffer& vb)
{
	// Banned Operation
	return VertexBuffer();
}

VertexBuffer::VertexBuffer()
{
	m_RendererID = 0;
}

VertexBuffer::~VertexBuffer()
{
	GLCall(glDeleteBuffers(1, &m_RendererID));
}

void VertexBuffer::Init(const void* data, ui32 size)
{
	glGenBuffers(1, &m_RendererID);
	glBindBuffer(GL_ARRAY_BUFFER, m_RendererID);
	glBufferData(GL_ARRAY_BUFFER, size, data, GL_STATIC_DRAW);
}

void VertexBuffer::Bind()
{
	GLCall(glBindBuffer(GL_ARRAY_BUFFER, m_RendererID));
}

void VertexBuffer::Unbind()
{
	GLCall(glBindBuffer(GL_ARRAY_BUFFER, 0));
}
