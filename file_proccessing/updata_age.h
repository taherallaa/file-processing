#ifndef _UPDATA_AGE_H_
#define _UPDATA_AGE_H_

#include <iostream>
#include <fstream>

//add header file
#include "employee_class.h"

void updataAge() {
	Employee emp;
	int id;
	fstream file;

	file.open("data.txt", ios::in | ios::out);
	if (file.is_open()) {
		file.read((char*)&emp, sizeof(emp));

		cout << endl << "---------------- \n";
		cout << "\nEnter id of the field that you want ot updata:- " << endl;
		cin >> id;

		while (!file.eof()) {
			if (id == emp.id)
			{
				cout << "\nEnter new name:- " << endl;
				cin >> emp.name;

				int tellg = file.tellg();
				int sizeOf = sizeof(emp);

				file.seekg(tellg - sizeOf, ios::beg);

				file.write((char*)&emp, sizeof(emp));

				break;
			}

			file.read((char*)&emp, sizeof(emp));
		}
		if (id != emp.id)
			cout << "Invaild id" << endl;
		file.close();
	}
	else {
		cout << "The file doesn't found/open " << endl;
	}
}

#endif