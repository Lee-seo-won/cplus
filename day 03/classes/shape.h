#include <iostream>
using namespace std;


struct Point{ //struct는 기본 public임
	int x, y;

	
	Point(int x, int y) {
		this->x = x;
		this->y = y;
		cout << "점(" << x << ', ' << y << ") 생성자 \n";

	}
};

class Circle {
	Point center;
	int radius;

public:
	Circle(int x, int y, int radius) {
		center.x = x;
		center.y = y;
		this->radius = radius;
		cout << "원(반지름 = " << radius << ") 생성자 \n";
	}
};