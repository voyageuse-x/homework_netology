#include <iostream>
#include <Windows.h>
#include "Leaver.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string name;
	std::cout << "¬ведите им€: ";
	std::cin >> name;
	Leaver l;
	std::cout << l.leave(name);
	return EXIT_SUCCESS;
}