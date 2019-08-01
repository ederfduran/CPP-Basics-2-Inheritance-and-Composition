#include "Rectangle.h"

cpp_class9::Rectangle::Rectangle(const unsigned int height, const unsigned int width):m_Height(height),m_Width(width)
{
}

cpp_class9::Rectangle::Rectangle(const Rectangle & other):m_Height(other.m_Height),m_Width(other.m_Width)
{
}

const cpp_class9::Rectangle & cpp_class9::Rectangle::operator=(const Rectangle & other)
{
	if (this==&other) {
		return *this;
	}
	m_Height = other.m_Height;
	m_Width = other.m_Width;
	return *this;
}
