#include <cassert>
#include <iostream>

#include "Door.h"
#include "House.h"
#include "TestHouse.h"
#include "Window.h"

void cpp_class9_test::TestHouse::testHouseCreation()
{
	const cpp_class9::Door doorTest (cpp_class9::Door::M_METAL,10,20);
	cpp_class9::Window windowsArray[4];
	windowsArray[0] = cpp_class9::Window(cpp_class9::Window::S_CHINESE, 8, 10);
	windowsArray[1] = cpp_class9::Window(cpp_class9::Window::S_CHINESE, 8, 10);
	windowsArray[2] = cpp_class9::Window(cpp_class9::Window::MODERN, 5, 8);
	windowsArray[3] = cpp_class9::Window(cpp_class9::Window::MODERN, 5, 8);
	const cpp_class9::House testHouse(windowsArray,doorTest);
	assert(testHouse.m_Door.getMaterial()== cpp_class9::Door::M_METAL &&
		testHouse.m_Door.getHeight()==10u && testHouse.m_Door.getWidth()==20u );

	assert(testHouse.m_Windows[0].getStyle() == cpp_class9::Window::S_CHINESE && 
		testHouse.m_Windows[0].getHeight() == 8u&& testHouse.m_Windows[0].getWidth() == 10u);
}


void cpp_class9_test::TestHouse::testGetDoorArea()
{
	const cpp_class9::Door doorTest = cpp_class9::Door(cpp_class9::Door::M_GLASS, 100, 30);
	cpp_class9::Window windowsArray [4];
	windowsArray[0] = cpp_class9::Window(cpp_class9::Window::S_CHINESE, 8, 10);
	windowsArray[1] = cpp_class9::Window(cpp_class9::Window::S_CHINESE, 8, 10);
	windowsArray[2] = cpp_class9::Window(cpp_class9::Window::MODERN, 52, 5);
	windowsArray[3] = cpp_class9::Window(cpp_class9::Window::MODERN, 53, 4);

	const cpp_class9::House testHouse(windowsArray, doorTest);
	assert(testHouse.getDoorArea() == 3000);
}

void cpp_class9_test::TestHouse::testGetWindowsArea()
{
	const cpp_class9::Door doorTest = cpp_class9::Door(cpp_class9::Door::M_WOOD, 30, 10);
	cpp_class9::Window windowsArray[4];
	windowsArray[0] = cpp_class9::Window(cpp_class9::Window::S_CHINESE, 8, 10);
	windowsArray[1] = cpp_class9::Window(cpp_class9::Window::S_CHINESE, 8, 10);
	windowsArray[2] = cpp_class9::Window(cpp_class9::Window::MODERN, 5, 8);
	windowsArray[3] = cpp_class9::Window(cpp_class9::Window::MODERN, 5, 8);
	const cpp_class9::House testHouse(windowsArray, doorTest);
	assert(testHouse.getWindowsArea()== 240);
}

void cpp_class9_test::TestHouse::testStreamOperator()
{
	const cpp_class9::Door doorTest = cpp_class9::Door(cpp_class9::Door::M_METAL, 10, 20);
	cpp_class9::Window windowsArray[4];
	windowsArray[0] = cpp_class9::Window(cpp_class9::Window::S_CHINESE, 8, 10);
	windowsArray[1] = cpp_class9::Window(cpp_class9::Window::S_CHINESE, 8, 10);
	windowsArray[2] = cpp_class9::Window(cpp_class9::Window::MODERN, 5, 8);
	windowsArray[3] = cpp_class9::Window(cpp_class9::Window::MODERN, 5, 8);
	const cpp_class9::House testHouse(windowsArray, doorTest);
	std::cout << testHouse << std::endl;
}
