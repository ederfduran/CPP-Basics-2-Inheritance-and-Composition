#include "Door.h"

cpp_class9::Door::Door(const Material material, const unsigned int height, const unsigned int width)
	:m_Material(material),Rectangle(height,width)
{

}

cpp_class9::Door::Door(const Door & other):m_Material(other.m_Material),Rectangle(other.getHeight(), other.getWidth())
{
}

const cpp_class9::Door & cpp_class9::Door::operator=(const Door & other)
{
	if (this== &other) {
		return *this;
	}
	m_Height = other.m_Height;
	m_Width = other.m_Width;
	m_Material = other.m_Material;
	return *this;
}
