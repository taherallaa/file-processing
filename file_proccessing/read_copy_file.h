#ifndef _READ_COPY_FILE_H_
#define _READ_COPY_FILE_H_

#include <iostream>
#include <fstream>

//add header file
#include "employee_class.h"
#include "global_var.h"

using namespace std;

void readCopyFile() {
	system("cls");
	Employee emp;
	ifstream file;

	file.open(namefile, ios::in);

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


#endif // !_READ_COPY_FILE_H_
