#include "Array1.h"

unsigned int Array::GetSize() const
{
	return m_size;
}

Array::Array(const unsigned int size)
{
	m_array = new int[size];
	m_size = size;

	for (unsigned int i = 0; i < m_size; ++i)
	{
		m_array[i] = i;
	}
}



Array::~Array()
{
	delete[] m_array;
}

int& Array::operator[](const unsigned int index)
{
	if (index < m_size && index >= 0)
	{
		return m_array[index];
	}
	return m_array[0];
}

