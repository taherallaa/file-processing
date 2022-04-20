#ifndef _ADD_RECORD_H_
#define _ADD_RECORD_H_

#include <iostream>
#include <fstream>

//add header file
#include "employee_class.h"
#include "global_var.h"


using namespace std; 

//the function blew make in order to make user enable add records that consist of id, name, age, salary
void addRecord() {
	system("cls");

	//variable decleration and dircet brace initialization
	ch = {false};
	char letter{};
	Employee emp{};
	int check__id{};

	ofstream file("data.txt", ios::out | ios::app);
	ifstream readFile("data.txt", ios::in);

	if (file.is_open())
	{
		cout << "----------------------------------" << endl;
		cout << "===> Follow instructions blew?! <===\n";
		cout << "----------------------------------" << endl;
		do {
			//this condition in order to  don't delete above statment in first time and the value will chage in 
			//the line_74
			if (ch)
				system("cls");

		again:

			cout << "Enter id" << endl;
			cin >> check__id;

			//this line blew will read the file first before we go to do do while
			//to enable us check emp.id
			readFile.read((char *) &emp, sizeof(emp));

			// this do while blew in order to check if id is exist in file or not...
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

			//thie line blew in order ot write  record file 
			file.write((char*)&emp, sizeof(emp));
			
			cout << endl << "-------------------" << endl;
			cout << "Do you want to add new record(Y,N)?" << endl;
			cin >> letter;

			ch = true;		//this variable use in the if statment in the line__34

		} while (letter == 'Y' || letter == 'y');
		file.close();
	}
	else {
		cout << "The file doesn't found \n";
	}
}

#endif