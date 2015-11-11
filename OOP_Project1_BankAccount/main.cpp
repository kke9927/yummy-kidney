#include <iostream>
using namespace std;
#include "bank.h"
using namespace sict;

int main() {

	int num = 0;

	while (1)
	{
		showMenu();
		cout << "Selection : ";
		cin >> num;
		cout << endl;

	switch (num) 
	{
	case MAKE:
		makeaccount();
		break;
	case DEPOSIT:
		deposit();
		break;
	case WITHDRAW:
		withdraw();
		break;
	case INQUIRE:
		display();
		break;
	case EXIT:
		return 0;
	}
	}
return 0;
}