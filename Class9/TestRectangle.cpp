#include <cassert>

#include "Rectangle.h"
#include "TestRectangle.h"

void cpp_class9_test::TestRectangle::testRectangleCreation()
{
	const unsigned mockHeight = 100;
	const unsigned mockWidth = 12;
	cpp_class9::Rectangle testRectangle(mockHeight,mockWidth);
	cpp_class9::Rectangle testRectangle2 = testRectangle;
	
	assert(testRectangle.m_Height==mockHeight&& testRectangle.m_Width && mockWidth);
	assert(testRectangle2.m_Height == mockHeight && testRectangle2.m_Width && mockWidth);


}

void cpp_class9_test::TestRectangle::testRectangleGetters()
{
	const unsigned mockHeight = 10;
	const unsigned mockWidth = 123;
	cpp_class9::Rectangle testRectangle(mockHeight, mockWidth);
	assert(testRectangle.getHeight()==testRectangle.m_Height&& testRectangle.getWidth()== testRectangle.m_Width);
}

void cpp_class9_test::TestRectangle::testRectangleArea()
{
	const unsigned mockHeight = 10;
	const unsigned mockWidth = 123;
	cpp_class9::Rectangle testRectangle(mockHeight, mockWidth);
	assert(testRectangle.getArea()== mockHeight* mockWidth);
}
