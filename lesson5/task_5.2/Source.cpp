#include <iostream>
#include <string>
#include <Windows.h>
#include "Class_counter.h"


void action(Counter& count) {
	char com{};
	while (com != 'x' && com != '�') {
		std::cout << "������� ������� ('+', '-', '=' ��� 'x'): ";
		std::cin >> com;
		switch (com) {
		case ('+'):
			count.grow();
			break;
		case ('-'):
			count.fall();
			break;
		case ('='):
			count.print();
			break;

		}
	}
	return;
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::string answ;
	std::cout << "�� ������ ������� ��������� �������� ��������? ������� �� ��� ���: ";
	std::cin >> answ;
	if (answ == "��") {
		int initial_v;
		std::cout << "������� ��������� �������� ��������: ";
		std::cin >> initial_v;
		Counter count(initial_v);
		action(count);
	}
	else {
		Counter count;
		action(count);
	}
	std::cout << "�� ��������!" << std::endl;
	return EXIT_SUCCESS;

}