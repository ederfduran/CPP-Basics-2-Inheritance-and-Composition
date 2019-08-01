#include <cassert>

#include "Door.h"
#include "TestDoor.h"

void cpp_class9_test::TestDoor::testDoorCreation()
{
	const cpp_class9::Door::Material testMaterial = cpp_class9::Door::M_METAL;
	const cpp_class9::Door::Material testMaterial2 = cpp_class9::Door::M_GLASS;
	const cpp_class9::Door testDoor(testMaterial);
	const cpp_class9::Door testDoor2(testDoor);
	assert(testDoor.m_Material==testMaterial);

	cpp_class9::Door testDoor3(testMaterial2);
	testDoor3 = testDoor;
	assert(testDoor3.m_Material== testMaterial);

}

void cpp_class9_test::TestDoor::testDoorGetter()
{
	const cpp_class9::Door::Material testMaterial = cpp_class9::Door::M_GLASS;
	cpp_class9::Door testDoor(testMaterial);
	assert(testDoor.getMaterial()== testMaterial);

}

