#include "VertexBuffer.h"

VertexBuffer::VertexBuffer()
{
	m_RendererID = 0;
}

VertexBuffer::VertexBuffer(const void* data, ui32 size)
{
	ui32 vbo;
	glGenBuffers(1, &vbo);
	glBindBuffer(GL_ARRAY_BUFFER, vbo);
	glBufferData(GL_ARRAY_BUFFER, size, data, GL_STATIC_DRAW);
	m_RendererID = vbo;
}

VertexBuffer::~VertexBuffer()
{
	GLCall(glDeleteBuffers(1, &m_RendererID));
}

void VertexBuffer::Bind()
{
	GLCall(glBindBuffer(GL_ARRAY_BUFFER, m_RendererID));
}

void VertexBuffer::Unbind()
{
	GLCall(glBindBuffer(GL_ARRAY_BUFFER, 0));
}

ui32 VertexBuffer::vboCreator(const void* data, ui32 size) {
	ui32 vbo;
	glGenBuffers(1, &vbo);
	glBindBuffer(GL_ARRAY_BUFFER, vbo);
	glBufferData(GL_ARRAY_BUFFER, size, data, GL_STATIC_DRAW);
	m_RendererID = vbo;
	return vbo;
}
