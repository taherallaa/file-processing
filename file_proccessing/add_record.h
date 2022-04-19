#ifndef _ADD_RECORD_H_
#define _ADD_RECORD_H_

#include <iostream>
#include <fstream>

//add header file
#include "employee_class.h"


using namespace std; 


void addRecord() {
	//variable decleration
	char letter;
	Employee emp;
	int check__id{};

	ofstream file("data.txt", ios::out | ios::app);
	ifstream readFile("data.txt", ios::in);

	if (file.is_open())
	{
		cout << "----------------------" << endl << endl;
		cout << "Follow instructions blew...\n";
		cout << "--------------" << endl;
		do {

			system("cls");

		again:

			cout << "Enter id" << endl;
			cin >> check__id;

			readFile.read((char *) &emp, sizeof(emp));

			// this do while blew for check if id is exist in file or not...
			do {

				if (check__id != emp.id) {
					emp.id = check__id;
					break;
				}
				else {
					cout << "the id ( " << check__id << " ) is exist, try again!" << endl;
					goto again;
				} 
				readFile.read((char*)&emp, sizeof(emp));
			} while (!file.eof());

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