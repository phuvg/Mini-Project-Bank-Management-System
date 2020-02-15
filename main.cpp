#include "Account.h"
#include<stdlib.h>

int main()
{
	Account accountList[1000];
	int numOfList;
	while (true)
	{
		int choose;
		cout << "**********CUSTOMER ACCOUNT BANKING MANAGEMENT SYSTEM**********" << endl;
		cout << "******************WELCOME TO THE MAIN MENU********************" << endl;
		cout << "1.Create new account";
		cout << "\n2.Update information of existing account";
		cout << "\n3.For transactions";
		cout << "\n4.Check the details of existing account";
		cout << "\n5.Removing existing account";
		cout << "\n6.View customer's list";
		cout << "\n7.Exit";
		cout << "\n\n\n\n\nEnter your choice: ";
		cin >> choose;
		switch (choose)
		{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7: exit(0);
			break;
		default: cout << "PLEASE CHOOSE AGAIN!!!";
			break;
		}
	}
	system("pause");
	return 0;
}


void createNewAccount(Account listAcc[], int& totalAcc)
{
	int flagChk;
	while (flagChk == 1)
	{
		system("cls");
		cout << "---------- CREATE ACCOUNT ---------" << endl;
		totalAcc++;
		listAcc[totalAcc].input();
		cout << "input complete." << endl;

		//continue create new or not
		int repeat = 0;
		char temp;
		do
		{
			cout << "Do you want to continue create account? (Y/N)" << endl;
			cin >> temp;
			if (temp == 'Y' || temp == 'y')
			{
				flagChk = 1;
				repeat = 0;
			}
			else if (temp == 'N' || temp == 'n')
			{
				flagChk = 0;
				repeat = 0;
			}
			else
			{
				flagChk = 0;
				repeat = 0;
			}
		} while (repeat == 1);
	}
}

int findBankNumber(Account accountList[], int numOfList, string bankNumber)
{
	for (int i; i < numOfList; i++)
	{
		if (accountList[i].getBankNumber() == bankNumber)
		{
			return i;
		}
		return -1; //not exists
	}
}

void transfers(Account listAcc[], int totalAcc, int pos)
{
	cout << "Please input the destination bank number: ";
	string desNum;
	fflush(stdin);
	cin.ignore();
	getline(cin, desNum);
	//find desNum
	int desPos = findBankNumber(listAcc, totalAcc, desNum);
	//execute
	if (desPos == -1)
	{
		cout << "ERROR: Not found destination bank number!" << endl;
	}
	else
	{
		cout << "Please input money: ";
		double transMoney;
		cin >> transMoney;
		if (transMoney > listAcc[pos].getMoney())
		{
			cout << "ERROR: Your money do not enough to execute this action!" << endl;
			cout << "Enter any key to continue..." << endl;
			system("pause");
		}
		else
		{
			//update money for account send money
			listAcc[pos].setMoney(listAcc[pos].getMoney() - transMoney);
			//update money for account receive money
			listAcc[desPos].setMoney(listAcc[desPos].getMoney() + transMoney);
			//complete
			cout << "Complete!" << endl;
			cout << "Enter any key to continue..." << endl;
			system("pause");
		}
	}
}

void deposit(Account listAcc[], int pos)
{
	cout << "Please input money: ";
	double depositMoney;
	cin >> depositMoney;
	if (depositMoney <= 0)
	{
		cout << "ERROR: Your money do not enough to execute this action!" << endl;
		cout << "Enter any key to continue..." << endl;
		system("pause");
	}
	else
	{
		//update money for account send money
		listAcc[pos].setMoney(listAcc[pos].getMoney() + depositMoney);
		cout << "Complete!" << endl;
		cout << "Enter any key to continue..." << endl;
		system("pause");
	}
}

void withdraw(Account listAcc[], int pos)
{
	cout << "Please input money: ";
	double withdrawMoney;
	cin >> withdrawMoney;
	if (withdrawMoney > listAcc[pos].getMoney())
	{
		cout << "ERROR: Your money do not enough to execute this action!" << endl;
		cout << "Enter any key to continue..." << endl;
		system("pause");
	}
	else
	{
		//update money for account send money
		listAcc[pos].setMoney(listAcc[pos].getMoney() + withdrawMoney);
		cout << "Complete!" << endl;
		cout << "Enter any key to continue..." << endl;
		system("pause");
	}
}

void transact(Account listAcc[], int& totalAcc)
{
	if (totalAcc < 0)
	{
		cout << "NO ACCOUNT TO WORK!" << endl;
		return;
	}
	else
	{
		int repeatFunc = 0;
		do
		{
			system("cls");
			cout << "---------- TRANSACT ---------" << endl;
			string bankNumber;
			// input the bank number
			cout << "Please input your bankNumber: ";
			fflush(stdin);
			cin.ignore();
			getline(cin, bankNumber);
			// find the input
			int pos = findBankNumber(listAcc, totalAcc, bankNumber);
			if (pos == -1)
			{
				cout << "ERROR: Not found this bank number!" << endl;
				repeatFunc = 1;
			}
			else
			{
				int repeatExe = 0;
				while (repeatExe == 1)
				{
					system("cls");
					cout << "**** ACCOUNT INFORMATION *****" << endl;
					listAcc[pos].output();
					cout << endl << endl << endl;
					cout << "**** ACTION *****" << endl;
					cout << "1. Transfers " << endl;
					cout << "2. Deposit " << endl;
					cout << "3. Withdraw " << endl;
					cout << "4. Exit" << endl;
					cout << "Enter your action: " << endl;
					int choose;
					cin >> choose;
					switch (choose)
					{
					case 1:
					{
						transfers(listAcc, totalAcc, pos);
						repeatExe = 1;
						break;
					}
					case 2:
					{
						deposit(listAcc, pos);
						repeatExe = 1;
						break;
					}
					case 3:
					{
						withdraw(listAcc, pos);
						repeatExe = 1;
						break;
					}
					case 4:
					{
						repeatExe = 0;
						break;
					}
					default:
					{
						repeatExe = 1;
						break;
					}
					}
				}
			}
		} while (repeatFunc == 1);
	}
}

void remove(Account listAcc[], int& totalAcc)
{
	cout << "**********CUSTOMER ACCOUNT BANKING MANAGEMENT SYSTEM**********" << endl;
	cout << "Please input your identity card number: ";
	string id;
	fflush(stdin);
	cin.ignore();
	getline(cin, id);
}


int FindID(Account accountList[], int numOfList,string ID)
{
	for (int i; i < numOfList; i++)
	{
		if (accountList[i].getIdcn() == ID)
		{
			return i;
		}
		return -1; //no detail
	}
}

void updateAccount(Account accountList[], int &numOfList)
{
	cout << "*****Update information account*****" << endl;
	if (numOfList == 0)
	{
		cout << "No account! Plese insert Account" << endl;
		return; //no account
	}
	string IDUpdate;
	cout << "Please input ID need Update: ";
	cin >> IDUpdate;  //input ID
	int pos = FindID(accountList, numOfList, IDUpdate);
	if (pos == -1)
	{
		cout << "ID not exist" << endl;
	}
	else {
		cout << "*****Choose Information Need Update*****" << endl;
		cout << "1.idcn";
		cout << "\n2.name";
		cout << "\n3.birthday";
		cout << "\n4.phone";
		cout << "\n5.address";
		cout << "\n6.bank number";
		cout << "\n7.money";
		int updateInformation;
		cout << "Your choose want to update: ";
		cin >> updateInformation;
		if (updateInformation == 1)
		{
			string temp;
			cin.ignore();
			cin >> temp;
			accountList[pos].setIdcn(temp);
		}
		if (updateInformation == 2)
		{
			string temp;
			cin.ignore();
			getline(cin, temp);
			accountList[pos].setName(temp);
		}
		if (updateInformation == 3)
		{
			Birthday temp;
			temp.input;
			accountList[pos].setBirthday(temp);
		}
		if (updateInformation == 4)
		{
			string temp;
			cin >> temp;
			accountList[pos].setPhone(temp);
		}
		if (updateInformation == 5)
		{
			string temp;
			cin.ignore();
			getline(cin, temp);
			cin >> temp;
			accountList[pos].setAddress(temp);
		}
		if (updateInformation == 6)
		{
			string temp;
			cin >> temp;
			accountList[pos].setBankNumber(temp);
		}
		if (updateInformation == 7)
		{
			double temp;
			cin >> temp;
			accountList[pos].setMoney(temp);
		}
	}
}
