#include "TestDoor.h"
#include "TestHouse.h"
#include "TestRectangle.h"
#include "TestWindow.h"

int main() {

	cpp_class9_test::TestRectangle::testRectangleCreation();
	cpp_class9_test::TestRectangle::testRectangleGetters();
	cpp_class9_test::TestRectangle::testRectangleArea();

	cpp_class9_test::TestDoor::testDoorCreation();
	cpp_class9_test::TestDoor::testDoorGetter();
	
	cpp_class9_test::TestWindow::testWindowCreation();
	cpp_class9_test::TestWindow::testWindowGetter();

	cpp_class9_test::TestHouse::testHouseCreation();
	cpp_class9_test::TestHouse::testGetDoorArea();
	cpp_class9_test::TestHouse::testGetWindowsArea();
	cpp_class9_test::TestHouse::testStreamOperator();

	return 0;
}