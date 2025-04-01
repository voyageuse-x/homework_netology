#include <iostream>

class Counter {
	int initial_v;
public:
	Counter(int initial_v) {
		this->initial_v = initial_v;
	}
	Counter() {
		initial_v = 1;
	}
	void grow() {
		initial_v++;
	}
	void fall() {
		initial_v--;
	}
	void print() {
		std::cout << initial_v << std::endl;
	}

};

void action(Counter& count) {
	char com{};
	while (com != 'x') {
		std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
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
	setlocale(LC_ALL, "ru");
	std::string answ;
	std::cout << "Вы хотите указать начальное значение счетчика? Введите да или нет: ";
	std::cin >> answ;
	if (size(answ) == 2 ) {
		int initial_v;
		std::cout << "Введите начальное значение счётчика: ";
		std::cin >> initial_v;
		Counter count(initial_v);
		action(count);
		std::cout << "До свидания!" << std::endl;
		return EXIT_SUCCESS;
		
	}
	else {
		Counter count;
		action(count);
		std::cout << "До свидания!" << std::endl;
		return EXIT_SUCCESS;
		
	}
}


