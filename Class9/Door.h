#ifndef DOOR_H_
#define DOOR_H_
#include "Rectangle.h"

namespace cpp_class9_test {
	class TestDoor;
}

namespace cpp_class9 {
	
	class Door : public Rectangle {
	public:
		enum Material {
			M_WOOD=0,
			M_METAL,
			M_GLASS
		};
		friend class cpp_class9_test::TestDoor;
		Door(const Material material=M_WOOD, const unsigned int height = 0, const unsigned int width = 0);
		Door(const Door & other);
		const Door& operator=(const Door & other);
		inline Material getMaterial() const { return m_Material; }

	private:
		Material m_Material;
	};

}

#endif // !DOOR_H_