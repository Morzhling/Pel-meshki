
#include "pch.h"
#include <iostream>
using namespace std;


/*
\b удаление последнего выведенного символа
\n перейти на начало новой строки
\t перейти к следующей позиции табуляции

\\ вывести обратный слэш \
\" вывести дв. кавычку "
\' вывести один. кавычку '
*/

int main()
{	
	setlocale(LC_ALL, "Rus");
    cout << "Привет!\n\n" << endl; 
	cout << "\n\t\tПривет!\t\tМир\n";
	cout << "\\\'\"Привет!\"\'\\\n\n" << endl;

	cout << "\\Exorcizamus\tte,\tomnis\timmundus\tspiritus,\nomnis\tsatanica\tpotestas,\tomnis\tincursio\tinfernalis\tadversarii,\nomnis\tlegio,\tomnis\tcongregatio\tet\tsecta\tdiabolica\\\n";
}


