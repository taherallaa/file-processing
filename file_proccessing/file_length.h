#ifndef _FILE_LENGTH_H_
#define _FILE_LENGTH_H_

#include <iostream>
#include <fstream>

using namespace std;

void file_length() {
	std::ifstream file("text.txt", std::ios::in);

	if (file.is_open())
	{
		file.seekg(0, std::ios::end);
		std::cout << "the length of the file is " << file.tellg();
		file.close();
	}
	else {
		cout << "The file doesn't exit \n";
	}

}

#endif // !_FILE_LENGTH_H_
#define _FILE_LENGTH_H_




