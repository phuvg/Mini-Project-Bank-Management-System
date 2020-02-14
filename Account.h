#pragma once
#include "Birthday.h"
#include <string>
class Account
{
private:
	string idcn; // indentity card number
	string name;
	Birthday birthday;
	string phone;
	string address;
	string bankNumber;
	double money;
public:
	void import();
	void export();
	string getIdcn();
	string getName();
	Birthday getBirthday();
	string getPhone();
	string getAddress();
	string getBankNumber();
	double getMoney();
	void setIdcn(string idcn);
	void setName(string name);
	void setBirthday(Birthday birthday);
	void setPhone(string phone);
	void setAddress(string addr);
	void setBankNumber(string bankNumber);
	void setMoney(double money);
};

