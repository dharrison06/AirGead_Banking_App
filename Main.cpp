#include <iostream>
#include "BankingCalc.h"
using namespace std;

int main() {
	//creates an instance of ACCOUNT for calculations, breaks if removed.
	BankingCalc *Account = new BankingCalc;
	bool quit = false;
	string usrInput = "";
	//Display form to the user
	cout << "********************************" << endl;
	cout << "********** Data Input **********" << endl;
	cout << "Initial Investment Amount: " << endl;
	cout << "Monthly Deposit: " << endl;
	cout << "Annual Interest: " << endl;
	cout << "Number of years: " << endl;
	system("PAUSE");
	system("CLS"); //clears screen after user presses a key to move on to input stage.
	while (quit == false) //loops for endless different inputs to test
	{
		Account->dataInput();
		Account->printReport();
		cout << "\n\nWant to Test Different Values? (Y/N) :";
		cin >> usrInput;
		if (usrInput == "N" || usrInput =="n")
		{
			quit = true;
			break;
		}
		else if (usrInput == "Y" || usrInput == "y")
		{
			quit = false;
			system("CLS");
		}
		else //catches other inputs, but will send through the loop again if reply is not "N" or "n"
		{
			cout << "\n(Y/N) :";
			cin >> usrInput;
			if (usrInput == "N" || usrInput == "n")
			{
				quit = true;
				break;
			}
			system("CLS");
		}
	}
	return 0;
}