#include<iostream>

void print_dynamic_array(int* mas, int logical_size, int actual_size) {
	std::cout << "������������ ������: ";
	for (int i = 0; i < actual_size; i++) {
		if (i < logical_size) {
			std::cout << mas[i] << " ";
		}
		else {
			std::cout << "- ";
		}
	}
	return;
}

int main() {
	setlocale(LC_ALL, "ru");

	int actual_size{};
	int logical_size{};

	try {
		std::cout << "������� ����������� ������ �������: ";
		std::cin >> actual_size;
		std::cout << "������� ���������� ������ �������: ";
		std::cin >> logical_size;
		if (logical_size > actual_size) {
			throw "������! ���������� ������ ������� �� ����� ��������� �����������!";
		}
	}
	catch (const char* ex) {
		std::cout << ex << std::endl;
		return EXIT_FAILURE;
	}
	int* mas = new int[actual_size];
	for (int i = 0; i < logical_size; i++) {
		std::cout << "������� arr[" << i << "]: ";
		std::cin >> mas[i];

	}
	print_dynamic_array(mas, logical_size, actual_size);
	delete[] mas;
	return EXIT_SUCCESS;

}