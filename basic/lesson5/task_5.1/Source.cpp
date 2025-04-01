#include <iostream>
#include "Math_functions.h"

int main() {
	setlocale(LC_ALL, "ru");
	int a, b;
	int operation;
	std::cout << "Введите первое число: ";
	std::cin >> a;
	std::cout << "Введите второе число: ";
	std::cin >> b;
	std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень):";
	std::cin >> operation;
	switch (operation) {
	case 1:
		std::cout << a << " плюс " << b << " = " << addition(a, b); break;
	case 2:
		std::cout << a << " минус " << b << " = " << subtruct(a, b); break;
	case 3:
		std::cout << a << " умножить на " << b << " = " << multiply(a, b); break;
	case 4:
		std::cout << a << " разделить на " << b << " = " << division(a, b); break;
	case 5:
		std::cout << a << " в степени " << b << " = " << exponentiation(a, b);

	}
	return EXIT_SUCCESS;

}
