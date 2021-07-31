#include "VertexBuffer.h"

VertexBuffer::VertexBuffer()
{
	m_RendererID = 0;
}

VertexBuffer::VertexBuffer(VertexBuffer& vb)
{
	m_RendererID = vb.m_RendererID;
	vb.m_RendererID = 0;  // Make sure this object won't crash after vb is killed
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

const VertexBuffer& VertexBuffer::operator=(const VertexBuffer& rightValue)
{
	m_RendererID = rightValue.m_RendererID;
	//rightValue.m_RendererID = 0;  // Make sure this object won't crash after rightValue is killed
	return *this;
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
