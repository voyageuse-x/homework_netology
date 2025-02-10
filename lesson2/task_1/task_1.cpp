#include <iostream>

class Calculator {
	double num1;
	double num2;
public:
	double add() {
		return num1 + num2;
	}
	double multiply() {
		return num1 * num2;
	}
	double subtract_1_2() {
		return num1 - num2;
	}
	double subtract_2_1() {
		return num2 - num1;
	}
	double divide_1_2() {
		return num1 / num2;
	} 
	double divide_2_1() {
		return num2 / num1;
	}
	bool set_num1(double num1) {
		if (num1 == 0) {
			return false;
		}
		else {
			this->num1 = num1;
			return true;
		}
	} 
	bool set_num2(double num2) {
		if (num2 == 0) {
			return false;
		}
		else {
			this->num2 = num2;
			return true;
		}
	}
};

int main() {
	setlocale(LC_ALL, "ru");
	double num1{};
	double num2{};
	Calculator calc;

	while (true){
		std::cout << "������� num1: ";
		std::cin >> num1;
		while (!calc.set_num1(num1)) {
			std::cout << "�������� ����!" << std::endl;
			std::cout << "������� num1: ";
			std::cin >> num1;
		}

		std::cout << "������� num2: ";
		std::cin >> num2;
		while (!calc.set_num2(num2)) {
			std::cout << "�������� ����!" << std::endl;
			std::cout << "������� num2: ";
			std::cin >> num2;
		}
		std::cout << "num1 + num2 = " << calc.add() << std::endl;
		std::cout << "num1 - num2 = " << calc.multiply() << std::endl;
		std::cout << "num2 - num1 = " << calc.subtract_1_2() << std::endl;
		std::cout << "num1 * num2 = " << calc.subtract_2_1() << std::endl;
		std::cout << "num1 / num2 = " << calc.divide_1_2() << std::endl;
		std::cout << "num2 / num1 = " << calc.divide_2_1() << std::endl;
	}
	return EXIT_SUCCESS;
}