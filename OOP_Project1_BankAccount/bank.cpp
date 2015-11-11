#include <iostream>
#include <cstring>
using namespace std;
#include "bank.h"
namespace sict{
struct Acc{

	char custname[20];
	int accID;
	int balance; 
};

	struct Acc acc[100];

	int id;
	char name[20];
	int balance;
	int i = 0;

	void showMenu() {
		cout << "----Menu-----" << endl;
		cout << "1. " << "Make Account" << endl;
		cout << "2. " << "Deposit" << endl;
		cout << "3. " << "Withdraw" << endl;
		cout << "4. " << "Information of account" << endl;
		cout << "5. " << "Exit" << endl;
		cout << "Select: ";
	}

	void makeaccount() {
	cout << "[Make Account]" <<endl;
	cout << "Account ID: ";
	cin >> id;
	cout << "Name: ";
	cin >> name;
	cout << "Deposit: ";
	cin >> balance;
	cout << endl;

	acc[i].accID = id;
	strcpy(acc[i].custname, name);
	acc[i].balance = balance;
	
	i++;
	/* 여기부터 시작 해야됨*/
	}
	void deposit() {
	cout << "[Deposit]" <<endl;
	cout << "Account ID: ";
	cin >> id;
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