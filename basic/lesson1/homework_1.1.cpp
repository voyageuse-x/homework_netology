#include <iostream>

enum Months
{
	january = 1,
	february,
	march,
	april,
	may,
	june,
	july,
	august,
	september,
	october,
	november,
	december

};

int main() {
	setlocale(LC_ALL, "ru");
	Months month{};
	int pr_month{};
	while (true){
		std::cout << "Введите номер месяца: ";
		std::cin >> pr_month;
		if (pr_month == 0) {
			std::cout << "До свидания!" << std::endl;
			return EXIT_SUCCESS;
		}
		month = static_cast<Months>(pr_month);

		switch (month) {
		case january:
			std::cout << "Январь" << std::endl;
			break;
		case february:
			std::cout << "Февраль" << std::endl;
			break;
		case march:
			std::cout << "Март" << std::endl;
			break;
		case april:
			std::cout << "Апрель" << std::endl;
			break;
		case may:
			std::cout << "Май" << std::endl;
			break;
		case june:
			std::cout << "Июнь" << std::endl;
			break;
		case july:
			std::cout << "Июль" << std::endl;
			break;
		case august:
			std::cout << "Август" << std::endl;
			break;
		case september:
			std::cout << "Сентябрь" << std::endl;
			break;
		case october:
			std::cout << "Октябрь" << std::endl;
			break;
		case november:
			std::cout << "Ноябрь" << std::endl;
			break;
		case december:
			std::cout << "Декабрь" << std::endl;
			break;
		default:
			std::cout << "Неправильный номер!" << std::endl;

		}
	}

}
