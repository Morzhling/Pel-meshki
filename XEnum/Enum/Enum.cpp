// Enum.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
using namespace std;

enum nigermag { puking = -1, groundfloor, lobby, rooftop};

int main()
{
	int floor = puking;
	bool exit = 0;

	while (exit == 0) {

		cout << "Enter ur floor (from -1 to 2) ";
		cin >> floor;
		switch (floor) {
		case puking: 
			cout << " pukaem ";
			break;       //выход из цикла (условия)
		case groundfloor:
			cout << " zahodim ";
			break;
		case lobby: 
			cout << " zakupaemsya ";
			break;
		case rooftop:
			cout << " katapultiruemsya ";
			break;
		default: 
			cout << " poprobuy eshe razok, druzho4ek ";
			
		}
		cout << " davai eshe ,zhmi 0 ili ne  - 1 ";
		cin >> exit;
	}
	
	return 0;
}

