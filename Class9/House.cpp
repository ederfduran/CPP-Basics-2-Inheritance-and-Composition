#include "Door.h"
#include "House.h"

cpp_class9::House::House(Window windows[WINDOWS_NUM], const Door& door)
	:m_Windows{ windows[0],windows[1],windows[2],windows[3]}, m_Door(door)
{
		
}

cpp_class9::House::House(const House & other)
	: m_Windows{ other.m_Windows[0], other.m_Windows[1], other.m_Windows[2], other.m_Windows[3] }, m_Door(other.m_Door)
{
	
}

const cpp_class9::House & cpp_class9::House::operator=(const House & other)
{
	if (this == &other) {
		return *this;
	}
	
	m_Door = other.m_Door;
	for (unsigned int i = 0;i<WINDOWS_NUM;i++) {
		m_Windows[i] = other.m_Windows[i];
		
	}
	
	return *this;
}

unsigned int cpp_class9::House::getDoorArea() const
{
	return m_Door.getArea();;
}

unsigned int cpp_class9::House::getWindowsArea() const
{
	unsigned int totalArea = 0;
	for (unsigned int i = 0;i<WINDOWS_NUM;i++) {
		totalArea += m_Windows[i].getArea();
	}
	return totalArea;
}

std::ostream & cpp_class9::operator<<(std::ostream & os, const House & house)
{
	os << " Door Height :" << house.m_Door.getHeight() << " And "<<" Door Width : "<< house.m_Door.getWidth()<< std::endl;
	for (unsigned int i = 0; i<WINDOWS_NUM; i++) {
		
		os << "Window # "<< i << " Window Height :" << house.m_Windows[i].getHeight() << " And " << " Window Width : " << house.m_Windows[i].getWidth() << std::endl;
	}
	return os;
}
