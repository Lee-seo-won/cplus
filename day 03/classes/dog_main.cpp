#include "dog.h"


//class�� �⺻�� private �̹Ƿ� ��������� ���� �Ұ�
// public���� �����ϸ� ���� ����



int main() {
	Dog dog = Dog();  //dog ��ü ����
	Dog dog1 = Dog();   //dog1 ��ü(����) ����
	Dog dog2 = Dog(); //dog2 ��ü ����

	//��� ���� �� �� ����
	dog1.type = "Ǫ��";
	dog1.color = "brown";
	dog1.age = 3;
	
	dog2.type = "ġ�Ϳ�";
	dog2.color = "black";
	dog2.age = 4;

	//���
	dog.dogInfo();
	dog1.dogInfo();
	dog2.dogInfo();
	dog2.bark();
	/*cout << "���� : " << dog.type << endl;
	cout << "���� : " << dog.color << endl;
	cout << "���� : " << dog.age << endl;*/
	return 0;
}