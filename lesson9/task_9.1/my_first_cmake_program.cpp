#include <iostream>
#include <Windows.h>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	std::string name{};
	std::cout << "������� ���� ���: ";
	std::cin >> name;
	std::cout << "������������, " << name << "!";
	return EXIT_SUCCESS;

}