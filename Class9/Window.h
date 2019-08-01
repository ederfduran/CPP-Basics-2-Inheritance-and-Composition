#ifndef WINDOW_H_
#define WINDOW_H_
#include "Rectangle.h"

namespace cpp_class9_test {
	class TestWindow;
}

namespace cpp_class9 {

	class Window : public Rectangle {
	public:
		enum Style {
			S_FENG_SHUI=0,
			S_CHINESE,
			MODERN
		};
		friend class cpp_class9_test::TestWindow;
		Window(const Style style= S_FENG_SHUI, const unsigned int height=0, const unsigned int width=0);
		Window(const Window & other);

		const Window & operator=(const Window & other);

		inline Style getStyle()const { return m_Style; }
	private:
		Style m_Style;
	};
}

#endif // !WINDOW_H_
