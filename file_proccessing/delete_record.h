#ifndef _DELETE_RECORD_H_
#define _DELETE_RECORD_H_

#include <iostream>
#include <fstream>

//add header file
#include "employee_class.h"
#include "delete_choose_records.h"
#include "delete_all_records.h"


using namespace std;


void deleteRecord() {

	char letter;
	do {
		int choose;
		system("cls");

	taher:

		cout << "Choose any field that want to update it:- \n" << endl;
		cout << "1-Delete all record.\n2-Delete selected record.\n3-Exit.\n";
		cout << endl << "Enter your choose:-  ";
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

			cout << endl << endl << "Invalid choose try agein" << endl;
			cout << "-----------------------\n";

			goto taher;
			break;
		}

		cout << endl << "Do you want to delete anything else(Y,N)?   ";
		cin >> letter;

		cout << endl << "----------------------" << endl;

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