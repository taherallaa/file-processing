#ifndef _SEARCH_RECORD_H
#define  _SEARCH_RECORD_H

#include <iostream>
#include <fstream>
#include <string.h>

//add head file
#include "employee_class.h"


using namespace std;

//this function enable user to search about records and print the record on console..
void searchAboutRecord() {
	bool found{};
	char letter{};
	int id{};
	Employee emp;


	ifstream file("data.txt", ios::in);


	if (file.is_open()) {

			system("cls");

			file.read((char*)&emp, sizeof(emp));

			cout << "Enter id of the record you search about it:-   ";
			cin >> id;

			while (!file.eof()) {

				if (id == emp.id)
				{
					cout << "\n------------\nId\tName\tAge\tSalary\n";
					cout << emp.id << "\t" << emp.name << "\t" << emp.age << "\t"
						<< emp.salary << endl;
					found = true;
					//break;
				}
				file.read((char*)&emp, sizeof(emp));
			}
			if (!found)
				cout << "Invalid id \n";

			//the line blew for get answer from user if he want to search again 
			//take this value and make loop using recursion.
			cout << endl << "--------\nDo you want to search again(Y, N) ? ";
			cin >> letter;

			if (letter == 'y' || letter == 'Y') {
				searchAboutRecord();
			}
			else {
				return;
				file.close();
			}
	}
	else {
		cout << "The file doesn't open\n";
	}
}

#endif

