#include <iostream>
#include <Windows.h>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	std::string name{};
	std::cout << "Введите Ваше имя: ";
	std::cin >> name;
	std::cout << "Здравствуйте, " << name << "!";
	return EXIT_SUCCESS;

}