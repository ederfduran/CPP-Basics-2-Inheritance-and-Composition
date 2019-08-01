#include <cassert>

#include "Window.h"
#include "TestWindow.h"

void cpp_class9_test::TestWindow::testWindowCreation()
{
	const cpp_class9::Window::Style testStyle = cpp_class9::Window::S_CHINESE;
	const cpp_class9::Window::Style testStyle2 = cpp_class9::Window::MODERN;
	const cpp_class9::Window testWindow(testStyle);
	const cpp_class9::Window testWindow2(testWindow);
	assert(testWindow.m_Style == testStyle);

	cpp_class9::Window testWindow3(testStyle2);
	testWindow3 = testWindow;
	assert(testWindow3.m_Style== testStyle);
}

void cpp_class9_test::TestWindow::testWindowGetter()
{
	const cpp_class9::Window::Style testStyle = cpp_class9::Window::MODERN;
	const cpp_class9::Window testWindow(testStyle);
	assert(testWindow.getStyle()==testStyle);
}
