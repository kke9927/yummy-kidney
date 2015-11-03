#include <iostream>
#include <cstring>
using namespace std;
#include "bank.h"
namespace sict{
struct Acc{

	char name[10];
	int accNum;
	int money; 
};
	struct Acc acc;
    int depositM;
    int withdrawM;
	int i=0;
	void makeaccount() {
	cout << "[Make Account]" <<endl;
	cout << "Account ID: ";
	cin >> accNum;
	cin.ignore(100,'\n');
	cout << "Name: ";
	cin.getline(name, 30, '\n');
	cout << "Deposit: ";
	cin >> money;
	cout << endl;

	}
	void deposit() {
	cout << "[Deposit]" <<endl;
	cout << "Account ID: ";
	cin >> accNum;
	cout << "Deposit Money";
	cin >> depositM;
	cout << "Complete Thank you!" <<endl;
	}

	void withdraw() {
	cout << "[Withdraw]" <<endl;
	cout << "Account ID: ";
	cin >> accNum;
	cout << "withdraw";
	cin >> withdrawM;
	cout << "Complete thank you!"<<endl;
	}

	void display() {
		cout << name;
	}
}