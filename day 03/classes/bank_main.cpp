#include "bank_account.h"

int main() {
	//��ü ����
	BankAccount ba1 = BankAccount();
	BankAccount ba2 = BankAccount();
	BankAccount ba3 = BankAccount();

	//�ڷ� �Է�
	ba1.setAno("10-1234");
	ba1.setOwner("LSW");
	ba1.setBalance(10000);
	//���
	cout << "���� ��ȣ : " << ba1.getAno() << endl;
	cout << "������ : " << ba1.getOwner() << endl;
	cout << "�ܰ� : " << ba1.getBalance() << endl;
	return 0;
}