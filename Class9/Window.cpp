#include "Window.h"

cpp_class9::Window::Window(const Style style, const unsigned int height, const unsigned int width):m_Style(style),Rectangle(height,width)
{
}

cpp_class9::Window::Window(const Window & other):m_Style(other.m_Style),Rectangle(other.getHeight(), other.getWidth())
{
}

const cpp_class9::Window & cpp_class9::Window::operator=(const Window & other)
{
	if (this== &other) {
		return *this;
	}
	m_Height = other.m_Height;
	m_Width = other.m_Width;
	m_Style = other.m_Style;
	return *this;
}
