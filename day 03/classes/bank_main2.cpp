#include "bank_account.h"

int main() {
	//°´Ã¼ ¹è¿­
	BankAccount ba[3] = {
		BankAccount("10-1234", "¾È»ê", 1000),
		BankAccount("20-1234", "¼ÕÈï¹Î", 3000),
		BankAccount("30-1234", "·ùÇöÁø", 4000),
	};
		//Ãâ·Â
	for (int i = 0; i < 3; i++) {
		cout << "°èÁÂ ¹øÈ£ : " << ba[i].getAno() << endl;
		cout << "°èÁÂÁÖ : " << ba[i].getOwner() << endl;
		cout << "ÀÜ°í : " << ba[i].getBalance() << endl;
	}

	
	return 0;
}