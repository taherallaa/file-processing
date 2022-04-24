#ifndef _DELETE_RECORD_H_
#define _DELETE_RECORD_H_

#include <iostream>
#include <fstream>

//add header file
#include "employee_class.h"
#include "delete_choose_records.h"
#include "delete_all_records.h"


using namespace std;

//this function for enable user delete all file or (specific/define) field
void deleteRecord() {

	char letter{};

	do {
		int choose;

		system("cls");

	delete_again:

		cout << "Choose what delete you want:- \n" << '\n';
		cout << "1-Delete all record.\n2-Delete selected record.\n3-Exit.\n";
		cout << '\n' << "Enter your choose:-  ";
		cin >> choose;

		switch (choose)
		{
		case 1:
			deleatAllRecord();
			break;
		case 2:
			delChooseRecrd();
			break;
		case 3:
			return;
		default:

			cout << '\n' << "\nInvalid choose try agein" << '\n';
			cout << "-----------------------\n";
			system("cls");
			goto delete_again;
			break;
		}

		cout << '\n' << "Do you want to delete anything else(Y,N)?   ";
		cin >> letter;


	} while (letter == 'y' || letter == 'Y');












	/*
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
	*/
}

#endif