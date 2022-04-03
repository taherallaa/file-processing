#ifndef _UPDATA_EACH_RECORDS_H_
#define _UPDATA_EACH_RECORDS_H_

#include <iostream>
#include <conio.h>

//add header file
#include "updata_age.h"
#include "updata_salary.h"
#include "updata_name.h"

using namespace std;

void updataAnyRecord() {
	
	char letter;
	do {
		int choose;
		system("cls");

		taher:
	
		cout << "Choose any field that want to update it:- \n" << endl;
		cout << "1-Updata name.\t\t2-Updata age.\n3-Updata salary.\t4-Exit.\n";
		cout << endl << "Enter your choose:-  ";
		cin >> choose;

		switch (choose)
		{
		case 1:
			updataName();
			break;
		case 2:
			updataAge();
			break;
		case 3:
			updataSalary();
			break;
		case 4:
			return;
		default:
		
			cout << endl << endl << "Invalid choose try agein" << endl;
			cout << "-----------------------\n";
			
			goto taher;
			break;
		}

		cout << endl << "Do you want to updata anything else(Y,N)?   ";
		cin >> letter;

		cout << endl << "----------------------" << endl;

	} while (letter == 'y' || letter == 'Y');
}

#endif