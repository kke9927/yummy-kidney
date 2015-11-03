#include <iostream>
using namespace std;
#include "bank.h"
using namespace sict;

int main() {

	int num = 0;

	while ( num !=5) {
    cout << "----Menu-----" <<endl;
    cout << "1. " << "Make Account" <<endl;
    cout << "2. " << "Deposit" <<endl;
    cout << "3. " << "Withdraw" <<endl;
    cout << "4. " << "Information of account" <<endl;
    cout << "5. " << "Exit" <<endl;
    cout << "Select: ";
    cin >> num;

	switch (num) 
	{
	case 1:
		makeaccount();
		break;
	case 2:
		deposit();
		break;
	case 3:
		withdraw();
		break;
	case 4:
		display();
		break;
	case 5:
		break;
	}
	}
return 0;
}