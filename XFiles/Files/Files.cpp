

#include "pch.h"
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	char text[50];
	//ofstream file("text.txt"); // для записи в файл, ifstream  - для считывания 
	//file << " Work with files in C++"; //запись в файл следующего текста
	//file.close();

	//ofstream textfile("text2.txt"); // для записи в файл, ifstream  - для считывания 
	//textfile << " work!work! "; //запись в файл следующего текста
	//textfile.close();


	ofstream textfile("text3.txt", ios_base::app); // для записи в файл, ifstream  - для считывания 
	if (textfile.is_open()) {
		textfile << " work!work! "; //запись в файл следующего текста
		textfile.close();
	}
	else {
		cout << "Error!" << endl;
	}

	/*ifstream file("text2.txt");
	if (!file.is_open())
		cout << "Error. File is not found!" << endl;
	else {
		file >> text;
		cout << text << endl;
		file.getline(text, 50);
		cout << text << endl;
		file.close();	
	}
	 */
 

	return 0;
}


