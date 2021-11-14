#include <iostream>
#include <string>
//string 자료형을 사용하기 위해 포함시킴
using namespace std;

class Dog {
public:
	string type;  //종류
	string color; //색상
	int age;      // 나이
	~Dog(); //소멸자
	Dog(); //생성자
    Dog(string t, string c, int a);
	void dogInfo();
	void bark();

};

