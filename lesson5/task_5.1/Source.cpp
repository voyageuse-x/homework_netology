#include <iostream>
#include "Header.h"

int main() {
	setlocale(LC_ALL, "ru");
	int a, b;
	int operation;
	std::cout << "������� ������ �����: ";
	std::cin >> a;
	std::cout << "������� ������ �����: ";
	std::cin >> b;
	std::cout << "�������� �������� (1 - ��������, 2 ���������, 3 - ���������, 4 - �������, 5 - ���������� � �������):";
	std::cin >> operation;
	switch (operation) {
	case 1:
		std::cout << a << " ���� " << b << " = " << addition(a, b); break;
	case 2:
		std::cout << a << " ����� " << b << " = " << subtruct(a, b); break;
	case 3:
		std::cout << a << " �������� �� " << b << " = " << multiply(a, b); break;
	case 4:
		std::cout << a << " ��������� �� " << b << " = " << division(a, b); break;
	case 5:
		std::cout << a << " � ������� " << b << " = " << exponentiation(a, b);

	}
	return EXIT_SUCCESS;

}