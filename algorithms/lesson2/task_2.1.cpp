#include <iostream>

int fibonacci(int n) {
	if (n <= 1) {
		return n;
	}
	return fibonacci(n - 1) + fibonacci(n - 2);
}


int main() {
	setlocale(LC_ALL, "ru");
	int n{};
	std::cout << "Введите номер числа Фибоначчи: ";
	std::cin >> n;

	std::cout << n << "число Фибоначчи = " << fibonacci(n);
	return EXIT_SUCCESS;
}
// Сложность по скорости О(2^n)
// По памяти О(n)