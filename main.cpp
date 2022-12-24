#include <iostream>
#include <string>
#include "TelephoneBook.h"
int main() {
	setlocale(LC_ALL, "Russian");
	const int size = 10;
	TelephoneBook Abonents[size]{};
	bool work = true;
	while (work) {
		int action = actionNumber();
		switch (action)	{
		case 1:Show_mass_abonent(Abonents, size); break;
		case 2:add_abonent(Abonents, size); break;
		case 3:del_abonent(Abonents, size); break;
		case 0: work = false; break;
		default:std::cout << "Выбрано неопределенное действие!\n";
		}
		system("cls");
	} ;

	return 0;
}