#ifndef _SEARCH_RECORD_H
#define  _SEARCH_RECORD_H

#include <iostream>
#include <fstream>
#include <string.h>

//add head file
#include "employee_class.h"


using namespace std;

void searchAboutRecord() {
	Employee emp;
	ifstream file("data.txt", ios::in);
	int id;


	if (file.is_open()) {

		file.read((char*)&emp, sizeof(emp));

		cout << "Enter id of the record you search about it:-   ";
		cin >> id;

		while (!file.eof()) {

			if (id == emp.id)
			{
				cout << "\n------------\n\nId\tName\tAge\tSalary\n";
				cout << emp.id << "\t" << emp.name << "\t" << emp.age << "\t"
					<< emp.salary << endl;
				break;
			}
			file.read((char*)&emp, sizeof(emp));
		}
		if (id != emp.id)
			cout << "Invalid id \n";
		file.close();
	}
	else {
		cout << "The file doesn't open\n";
	}
}

#endif

