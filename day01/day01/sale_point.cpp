#include <iostream>
using namespace std;

int main() {

	int money, point;
	char memberInfo[30];  //�̸�, ��ȭ��ȣ

	cout << "�̸��� ��ȭ��ȣ�� �Է��ϼ��� : ";
	//cin >> memberInfo;
	cin.getline(memberInfo, sizeof(memberInfo));

	//���� ����Ʈ = ���� �ݾ� * 5%
	cout << "���� �ݾ��� �Է��ϼ��� : ";
	cin >> money;
	
	point = money * 0.05;

	cout << "���� ����Ʈ�� " << point << "���Դϴ�.";


	return 0;
}