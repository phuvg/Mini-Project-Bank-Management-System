#include "Account.h"
void Account::input()
{
	fflush(stdin);
	cout << "Please input account information:" << endl;
	cout << "- indentity card number: ";
	cin.ignore();
	getline(cin, idcn);
	cout << "- name: ";
	getline(cin, name);
	cout << "- birthday: ";
	birthday.input();
	cout << "- phone: ";
	cin.ignore();
	getline(cin, phone);
	cout << "- address: ";
	getline(cin, address);
	cout << "- bank number: ";
	getline(cin, bankNumber);
	cout << "- money: ";
	cin >> money;
}

void Account::output()
{
	cout << "Account information:" << endl;
	cout << "- Indentity card number: " << idcn << endl;
	cout << "- Name: " << name << endl;
	cout << "- Birthday: ";
	birthday.output();
	cout << endl;
	cout << "- Phone: " << phone << endl;
	cout << "- Address: " << address << endl;
	cout << "- Bank number: " << bankNumber << endl;
	cout << "- Money: " << money << endl;
}

string Account::getIdcn()
{
	return idcn;
}

string Account::getName()
{
	return name;
}

Birthday Account::getBirthday()
{
	return birthday;
}

string Account::getPhone()
{
	return phone;
}

string Account::getAddress()
{
	return address;
}

string Account::getBankNumber()
{
	return bankNumber;
}

double Account::getMoney()
{
	return money;
}

void Account::setIdcn(string idcn)
{
	this->idcn = idcn;
}

void Account::setName(string name)
{
	this->name = name;
}

void Account::setBirthday(Birthday birthday)
{
	this->birthday = birthday;
}

void Account::setPhone(string phone)
{
	this->phone = phone;
}

void Account::setAddress(string addr)
{
	this->address = addr;
}

void Account::setBankNumber(string bankNumber)
{
	this->bankNumber = bankNumber;
}

void Account::setMoney(double money)
{
	this->money = money;
}