#include <iostream>
#include <conio.h>


using namespace std;

//add header file..
#include "employee_class.h"
#include "add_record.h"
#include "read_records.h"
#include "updata_each_records.h"
#include "search_record.h"
#include "delete_record.h"
#include "file_copy.h"
#include "read_copy_file.h"
#include "global_var.h"


int main() {

	char letter;
	int choose{0};


	do
	{
		
		// change background and font color  of the terminal.
		system("color A0");

		//to clear the screen.
		system("cls");

		//the first screen of the program
		
		if (!ch) 
		{
			cout << endl << endl << "\t\t\t___ Welcome to you in our program, Press 'Enter' to continue___ " << endl;
			_getch();
		}

		system("cls");
		cout << "\t\a >>> All Operation on file >>>" << endl << endl;
		cout << "select your choose\n" << "-------" << endl;
	taher:
		
		cout << "1-Add record.\t\t\t2-Read record.\n3-Search recrod.\t\t"
			    "4-Updata record.\n5-Delete record.\t\t6-Copy file.\n7-Read copy file.\t\t8-Exit.";

		cout << endl << endl << "Enter your choose:-  ";
		cin >> choose;
		//make sound
		cout << "\a";

		switch (choose)
		{
		case 1:
			addRecord();
			break;
		case 2:
			readRecord();
			break;
		case 3:
			searchAboutRecord();
			break;
		case 4:
			updataAnyRecord();
			break;
		case 5:
			deleteRecord();
			break;
		case 6:
			copyfile();
			break;
		case 7:
			readCopyFile();
			break;
		case 8:
			exit(0);
		default:
			system("cls");
			cout << "\n\nInvalid input, Press enter to choose again." << endl;
			_getch();
			system("cls");
			goto taher;
		}
		cout << endl << "---------------------- \n";
		cout << "Do you want to do any proccessing on file(Y,N)? ";
		cin >> letter;
		ch = true;
	} while (letter == 'Y' || letter == 'y');

	return 0;
}