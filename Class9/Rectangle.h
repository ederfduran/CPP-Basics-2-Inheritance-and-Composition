#ifndef RECTANGLE_H_
#define RECTANGLE_H_

namespace cpp_class9_test {
	class TestRectangle;
}

namespace cpp_class9 {
	class Rectangle {
	
	protected:
		unsigned int m_Height;
		unsigned int m_Width;

	public:
		friend class cpp_class9_test::TestRectangle;
		Rectangle(const unsigned int height=0,const unsigned int width=0);
		Rectangle(const Rectangle& other);
		const Rectangle& operator=(const Rectangle& other);
		inline unsigned int getHeight()const { return m_Height; }
		inline unsigned int getWidth()const { return m_Width; }
		inline unsigned int getArea()const { return m_Width*m_Height; }


	};
}

#endif // !RECTANGLE_H_
