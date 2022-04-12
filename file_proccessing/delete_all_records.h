#ifndef _DELETE_ALL_RECORDS_H_
#define _DELETE_ALL_RECORDS_H_

#include <iostream>
#include <fstream>

//add header file.
#include "employee_class.h"
using namespace std;




void deleatAllRecord() {
	ofstream file("data.txt", ios::out);
	if (file.is_open())
	{
		file.clear();
		file.close();
	}
	else {
		cout << "the file doesn't found" << endl;
	}
}


#endif



