
#include "pch.h"
#include <iostream>
#include <clocale>

//#include <Windows.h>

using namespace std;


int main()
{	
	setlocale(LC_CTYPE, "russian");
	/*SetConsoleCP(1251);
	SetConsoleOutputCP(1251);*/
	//char string [6] = "Hello"; //последний символ - нуль терминатор \0, т.е. можно записать 5 символов  { 'H', 'e', 'l', 'l', 'o', '\0' }

	char string[500];
	cout << "Введите строку: ";
	
	gets_s (string);
	cout << string << endl;



	
	return 0;

}
