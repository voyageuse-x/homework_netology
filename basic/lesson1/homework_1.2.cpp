#include <iostream>

struct bank_account {
	int number{};
	std::string name{};
	double money{};
};

void change_balance(bank_account& account, double new_balance) {
	account.money = new_balance;
	return;

}
int main() {
	setlocale(LC_ALL, "ru");
	bank_account person1;
	double new_balance{};
	std::cout << "Введите номер счета: ";
	std::cin >> person1.number;

	std::cout << "Введите имя владельца: ";
	std::cin >> person1.name;

	std::cout << "Введите баланс: ";
	std::cin >> person1.money;

	std::cout << "Введите новый баланс: ";
	std::cin >> new_balance;
	change_balance(person1, new_balance);

	std::cout << "Ваш счёт: " << person1.name << ", " << person1.number << ", " << person1.money << std::endl;

	return EXIT_SUCCESS;
}
