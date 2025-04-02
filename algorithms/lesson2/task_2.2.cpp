#include <iostream>

unsigned long long fibonacci(int n) {
	if (n <= 1) {
		return n;
	}
	unsigned long long *mas = new unsigned long long[n + 1];
	mas[0] = 0;
	mas[1] = 1;

	for (int i = 2; i <= n; i++) {
		mas[i] = mas[i - 1] + mas[i - 2];
	}

	return mas[n];
}


int main() {
	setlocale(LC_ALL, "ru");
	int n{};
	std::cout << "Введите номер числа Фибоначчи: ";
	std::cin >> n;

	std::cout << n << "число Фибоначчи = " << fibonacci(n);
	return EXIT_SUCCESS;
}
