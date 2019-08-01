#ifndef HOUSE_H_
#define HOUSE_H_

#define WINDOWS_NUM 4

#include <iostream>
#include "Window.h"

namespace cpp_class9_test {
	class TestHouse;
}

namespace cpp_class9 {
	class Door;
	class Window;

	class House {

	public:
		friend class cpp_class9_test::TestHouse;
	
		House(Window windows[WINDOWS_NUM], const Door& door);
		House(const House& other);
		const House& operator=(const House& other);
		friend std::ostream& operator << (std::ostream&os,const House& house);
		unsigned int getDoorArea()const;
		unsigned int getWindowsArea()const;

	private:

		Door test[WINDOWS_NUM];  // test array, it works with forward declaration
		Window m_Windows[WINDOWS_NUM];
		Door m_Door;
		
	};
}

#endif // !HOUSE_H_

