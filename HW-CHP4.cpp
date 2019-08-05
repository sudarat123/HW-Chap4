#include <iostream>
#include <string>
using namespace std;
int main()
{
	char Ch;
	string user1,pass1,user2,pass2;
	do
	{
	cout << "/////////////////MENU/////////////////" << endl << endl;
	cout << " 1. Register\n";
	cout << " 2. Login\n" ;
	cout << " Q. Exit Program\n" ;
	cout << "____________________________________\n\n" ;
	cout << "Enter menu : ";
	cin >> Ch;
	if (Ch == '1')
	{
		cout << "Input Username : ";
		cin >> user1;
		cout << "Input Password : ";
		cin >> pass1;
		cout << "\n";
	}
	if (Ch == '2')
	{
		cout << "Input Username : ";
		cin >> user2;
		cout << "Input Password : ";
		cin >> pass2;
		cout << "\n";
	
		if (user2 == pass1 && user2 == pass1)
		{
		cout << "Username or Password correct ^_^\n\n" ;
		}
		else 
		{	
			cout << "!!Username or Password incorrect Please try again!!\n\n" ;
		}
	}
	if (Ch == 'Q')
	{
		cout << "\n";
		cout << ". . .Exit Program. . . \n" ;
		break;
	}
	}while(Ch != false);
	return(0);
}