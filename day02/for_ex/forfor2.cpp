#include <iostream>
using namespace std;

int main() {
	//1���� �����ϴ� ���α׷�
	int i, j;

	for (i = 0; i < 5; i++) {
		for (j = 1; j <= 5; j++) {
			int num = i * 5 + j;
			cout << num << " ";
		}
		cout << endl;
	}
	return 0;
}