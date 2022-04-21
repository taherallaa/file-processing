#ifndef _DELETE_ALL_RECORDS_H_
#define _DELETE_ALL_RECORDS_H_

#include <iostream>
#include <fstream>

//add header file.
#include "employee_class.h"
using namespace std;



//this function for delete all content of the file...
void deleatAllRecord() {

	
	fstream file("data.txt", ios::in);

	if (file.is_open()) {

		char letter;

		cout << "------" << endl << "Are you sure(Y,N)?  ";
		cin >> letter;

		if (letter == 'Y' || letter == 'y') {
			ofstream infile("data.txt", ios::out);
			cout << "file deleted";
		}
		else {
			cout << "file doesn't delete";
		}
			
	}
	else {
		cout << "the file doesn't found" << endl;
	}
}


#endif



