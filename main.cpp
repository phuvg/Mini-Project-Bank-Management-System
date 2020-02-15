#include "Account.h"
#include<stdlib.h>


int main()
{
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

