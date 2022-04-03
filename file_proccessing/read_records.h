#ifndef _READ_RECORD_H_
#define _READ_RECORD_H_

#include <iostream>
#include <fstream>

//add header file
#include "employee_class.h"

using namespace std;

void readRecord() {
	system("cls");
	Employee emp;
	ifstream file;

	file.open("data.txt", ios::in);

	if (file.is_open())
	{
		file.read((char*)&emp, sizeof(emp));

		cout << "The records are:- \n-----------" << endl;
		cout << "Id\tName\tAge\tSalary" << endl;
		while (!file.eof()) {
			cout << emp.id << "\t" << emp.name << "\t" << emp.age << "\t" << emp.salary << endl;
			file.read((char*)&emp, sizeof(emp));
		}
		file.close();
	}
	else {
		cout << "The file doesn't found" << endl;
	}
}

#endif  //_READ_RECORD_H_