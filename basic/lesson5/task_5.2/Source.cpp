#include <iostream>
#include <string>
#include <Windows.h>
#include "Class_counter.h"


void action(Counter& count) {
	char com{};
	while (com != 'x' && com != 'х') {
		std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
		std::cin >> com;
		switch (com) {
		case ('+'):
			count.grow();
			break;
		case ('-'):
			count.fall();
			break;
		case ('='):
			count.print();
			break;

		}
	}
	return;
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::string answ;
	std::cout << "Вы хотите указать начальное значение счетчика? Введите да или нет: ";
	std::cin >> answ;
	if (answ == "да") {
		int initial_v;
		std::cout << "Введите начальное значение счётчика: ";
		std::cin >> initial_v;
		Counter count(initial_v);
		action(count);
	}
	else {
		Counter count;
		action(count);
	}
	std::cout << "До свидания!" << std::endl;
	return EXIT_SUCCESS;

}