#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool IsLogedin()
{
	string username, password, un, pw;

	cout << "enter username : "; cin >> username;
	cout << "enter password : "; cin >> password;

	ifstream read("data\\" + username + ".txt");
	getline(read, un);
	getline(read, pw);

	if (un == username && pw == password)
	{
		return true;
	}

	else
	{
		return false;
	}
}
	int main()
	{
		int choice;

		cout << "1.Register\n2.Login\nyour choice : "; cin >> choice;
		if (choice == 1)
		{
			string username, password;

			cout << "enter username : "; cin >> username;
			cout << "enter password : "; cin >> password;

			ofstream file;

			file.open("data\\" + username + ".txt");

			file << username << endl << password;
			file.close();

			main();
				
		}
		else if (choice == 2)
		{
			bool status = IsLogedin();

			if (!status)
			{
				cout << "false login!" << endl;
				system("PAUSE");
				return 0;
			}
			else
			{
				cout << "succesfully logged in" << endl;
				system("PAUSE");
				return 1;
			}
		}
	}
