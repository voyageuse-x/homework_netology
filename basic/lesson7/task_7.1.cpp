#include <iostream>
#include <string>
#include <exception>
#include <Windows.h>

//class Bad_length : public std::exception {
//public:
//	const char* what() const override { return "Вы ввели слово запретной длины! До свидания"; }
//};

int function(std::string str, int forbidden_length) {
	if (str.length() == forbidden_length) {
		throw "Вы ввели слово запретной длины! До свидания";
	}
	else {
		std::cout << "Длина слова \"" << str << "\" равна " << str.length() << std::endl;
	}
	return 1;
}
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string str{};
	int len;
	std::cout << "Введите запретную длину: ";
	std::cin >> len;
	while (true) {
		std::cout << "Введите слово: ";
		std::cin >> str;

		try {
			function(str, len);
		}
		catch (const char* ex){
			std::cout << ex << std::endl;
			return EXIT_SUCCESS;
		}
	}
}