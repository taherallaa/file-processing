#ifndef _UPDATA_EACH_RECORDS_H_
#define _UPDATA_EACH_RECORDS_H_

#include <iostream>
#include <conio.h>

//add header file
#include "updata_age.h"
#include "updata_salary.h"
#include "updata_name.h"

using namespace std;

//this function for enable user updata the field of record (name, age, salary)
void updataAnyRecord() {
	
	char letter;
	do {
		int choose;
		system("cls");

		taher:
	
		cout << "Choose any field that want to update it:- \n" << '\n';
		cout << "1-Updata name.\t\t2-Updata age.\n3-Updata salary.\t4-Exit.\n";
		cout << '\n' << "Enter your choose:-  ";
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
		
			cout << '\n' << '\n' << "Invalid choose try agein" << '\n';
			cout << "-----------------------\n";
			
			goto taher;
			break;
		}

		cout << '\n' << "----------------------" << '\n';

		cout << '\n' << "Do you want to updata anything else(Y,N)?   ";
		cin >> letter;

		

	} while (letter == 'y' || letter == 'Y');
}

#endif