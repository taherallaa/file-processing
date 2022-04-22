#ifndef _READ_RECORD_H_
#define _READ_RECORD_H_

#include <iostream>
#include <fstream>

//add header file
#include "employee_class.h"

using namespace std;

//this function blew in order ot read record that added
void readRecord() {
	system("cls");

	Employee emp;
	ifstream file;

	file.open("data.txt", ios::in);

	if (file.is_open())
	{
		file.read((char*)&emp, sizeof(emp));

		cout << "The records are:- \n-----------" << '\n';
		cout << "Id\tName\tAge\tSalary" << endl;
		
		//the while blew in order to check the place of the cursor  and read the content file                                                                
		while (!file.eof()) {

			cout << emp.id << "\t" << emp.name << "\t" << emp.age << "\t" << emp.salary << '\n';
			file.read((char*)&emp, sizeof(emp));
		}
		file.close();
	}
	else {
		cout << "The file doesn't found" << '\n';
	}
}

#endif  //_READ_RECORD_H_