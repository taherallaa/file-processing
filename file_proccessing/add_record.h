#ifndef _ADD_RECORD_H_
#define _ADD_RECORD_H_

#include <iostream>
#include <fstream>

//add header file
#include "employee_class.h"


using namespace std;


void addRecord() {
	Employee emp;

	ofstream file("data.txt", ios::out | ios::app);

	char letter;
	if (file.is_open())
	{
		cout << "Follow instructions blow...\n";
		do {
			system("cls");
			cout << "Enter id:- " << endl;
			cin >> emp.id;

			cout << "Enter name:- " << endl;
			cin >> emp.name;

			cout << "Enter age:- " << endl;
			cin >> emp.age;

			cout << "Enter salary:- " << endl;
			cin >> emp.salary;

			//write feild 
			file.write((char*)&emp, sizeof(emp));
			
			cout << endl << "-------------------" << endl;
			cout << "Do you want to add new record(Y,N)?" << endl;
			cin >> letter;

		} while (letter == 'Y' || letter == 'y');
		file.close();
	}
	else {
		cout << "The file doesn't found \n";
	}
}



#endif