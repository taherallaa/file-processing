#ifndef _DELETE_RECORD_H_
#define _DELETE_RECORD_H_

#include <iostream>
#include <fstream>

//add header file
#include "employee_class.h"


using namespace std;


void deleteRecord() {
	int id;
	bool found;
	Employee emp;
	ifstream file;
	ofstream outfile;
	
	file.open("data.txt", ios::in);
	outfile.open("temp.txt", ios::out);

	if (file.is_open()) {

		file.read((char*)&emp, sizeof(emp));  //id = 1;

		cout << "Enter id of the record you want to delete it:-   ";
		cin >> id; //id = 1
		
		while (!file.eof()) {
		
			if (id != emp.id) {
				outfile.write((char *) &emp, sizeof(emp));
				found = true;
			}
			file.read((char*)&emp, sizeof(emp));
		}
		if (!found)
			cout << "Invaild id" << endl;


		file.close();
		outfile.close();

		remove("data.txt");
		rename("temp.txt", "data.txt");
	}
}

#endif