#ifndef _FILE_COPY_H_
#define  _FILE_COPY_H_


#include <iostream>
#include <fstream>
#include "global_var.h"

using namespace std;

void copyfile()
{
	char ch, letter;
	string copyfile;

	do {
		cout << "Enter the name of the file that want to copy it: " << endl;
		cin >> copyfile;

		cout << "Enter the path of the file and its name: " << endl;
		cin >> namefile;

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
