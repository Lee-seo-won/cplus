#include "add.h"

extern int _count;
int add(int, int); //�Լ� ���ÿ� ���� ����
//�ܺ� ���� ���� extern Ű���� ���
int main() {
	int x = 3, y = 4, z;

	_count++;
	cout << _count << endl;

	z = add(x, y);
	return 0;
}