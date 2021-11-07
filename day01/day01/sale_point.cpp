#include <iostream>
using namespace std;

int main() {

	int money, point;
	char memberInfo[30];  //이름, 전화번호

	cout << "이름과 전화번호를 입력하세요 : ";
	//cin >> memberInfo;
	cin.getline(memberInfo, sizeof(memberInfo));

	//구매 포인트 = 구매 금액 * 5%
	cout << "구매 금액을 입력하세요 : ";
	cin >> money;
	
	point = money * 0.05;

	cout << "구매 포인트는 " << point << "점입니다.";


	return 0;
}