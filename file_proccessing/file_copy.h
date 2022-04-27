#ifndef _FILE_COPY_H_
#define  _FILE_COPY_H_


#include <iostream>
#include <fstream>
#include "global_var.h"

using namespace std;

//this function enable user to copy any file and add the path you want...
//and we use global variable for pass the new copied_file in the function to read it...
void copyfile()
{
	system("cls");

	char ch{}, letter{};
	string copyfile;

	do {
		cout << '\n' << "Enter the (path + nameFile) or only name  of the file that want to copy it: " << '\n';
		cin >> copyfile;   //this variable place in globle file

		cout << "Enter the (path + name ) of copied file: " << '\n';
		cin >> namefile;  //this variable place in globle file

		ifstream infile(copyfile, ios::in);
		ofstream outfile(namefile, ios::out);

		if (infile.is_open())
		{
			while (infile.get(ch))
			{
				outfile.put(ch);
			}
			infile.close();
			outfile.close();
		}
		else {
			cout << "The file doesn't exit";
		}

		cout << "Do you want copy another file again (Y,N) \n";
		cin >> letter;
	} while (letter == 'y' || letter == 'Y');

}

#endif
