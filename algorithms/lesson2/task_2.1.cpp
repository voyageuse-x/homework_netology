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
	std::cout << "������� ����� ����� ���������: ";
	std::cin >> n;

	std::cout << n << "����� ��������� = " << fibonacci(n);
	return EXIT_SUCCESS;
}
// ��������� �� �������� �(2^n)
// �� ������ �(n)