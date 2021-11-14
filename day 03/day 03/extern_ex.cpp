#include "add.h"

extern int _count;
int add(int, int); //함수 사용시엔 생략 가능
//외부 변수 사용시 extern 키워드 사용
int main() {
	int x = 3, y = 4, z;

	_count++;
	cout << _count << endl;

	z = add(x, y);
	return 0;
}