#include <iostream>
#include <string>
//string �ڷ����� ����ϱ� ���� ���Խ�Ŵ
using namespace std;

class Dog {
public:
	string type;  //����
	string color; //����
	int age;      // ����
	~Dog(); //�Ҹ���
	Dog(); //������
    Dog(string t, string c, int a);
	void dogInfo();
	void bark();

};

