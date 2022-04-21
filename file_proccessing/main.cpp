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

	char letter{};
	int choose{0};


	do
	{
		
		// change background and font color  of the terminal background will be green(2) and textColor will be black(0)
		system("color 60");

		//to clear the screen of the console.
		system("cls");

		//this condetion depend on the value of ch in the line 91 
		if (!ch) 
		{
			cout << "\n\n\n\n\t\t\tWelcome to you in our payroll program made by "; 

			printf("%c", '\0' + 3);	printf("%c", '\0' + 3);	// for make emoji

			cout <<" <<taher allaa >> && << salah swidan >> \n\n\t\t\t\t\t\t Press 'Enter' to continue" << endl;
			_getch();
		}

		system("cls");
		cout << "\t\a >>> All Operation on file >>>" << endl << endl;
		cout << "select your choose\n" << "-------\n" << endl;

	//thid blew word (taher) for goto in line_86 if the user input choose number it will make user to enter number agein
	taher:
		
		//the list blew is a order that user will choose from it
		cout << " 1-Add employee.\t\t\t2-Read file.\n 3-Search about employee.\t\t"
			    "4-Updata employee filed.\n 5-Delete record.\t\t\t6-Copy file.\n 7-Read copy file.\t\t\t8-Exit.";

		cout << endl << endl << "Enter your choose:-  ";
		cin >> choose;

		//the \a blew to make sound when user input his choose
		cout << "\a";

		//this switch blew for display functions  
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

		ch = true; // the variable in the global variable file

	} while (letter == 'Y' || letter == 'y');

	return 0;
}