#include <iostream>
#define MODE 1

#ifdef MODE==1
	int add(int a, int b) {
		return a + b;
	}
#endif

int main() {
	setlocale(LC_ALL, "ru");

#ifndef MODE
#error "Необходимо определить MODE"
	//std::cout << "Необходимо определить MODE";
#elif MODE==0
	std::cout << "Работаю в тестовом режиме";
#elif MODE==1
	int add(int a, int b);
	int a;
	int b;
	std::cout << "Работаю в боевом режиме" << std::endl;
	std::cout << "Введите число 1: ";
	std::cin >> a;
	std::cout << "Введите число 2: ";
	std::cin >> b;
	std::cout << "Результат сложения: ";
	std::cout << add(a, b);
#else
	std::cout << "Неизвестный режим. Завершение работы";

#endif // !MODE{}
	return 0;
}
