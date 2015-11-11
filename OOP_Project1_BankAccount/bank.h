#ifndef BANK_H_
#define BANK_H_

namespace sict{
	enum{MAKE=1, DEPOSIT, WITHDRAW, INQUIRE, EXIT};

	void showMenu();
	void makeaccount();
	void deposit();
	void withdraw();
	void display();
}
#endif