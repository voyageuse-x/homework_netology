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
	std::cout << "¬ведите номер счета: ";
	std::cin >> person1.number;

	std::cout << "¬ведите им€ владельца: ";
	std::cin >> person1.name;

	std::cout << "¬ведите баланс: ";
	std::cin >> person1.money;

	std::cout << "¬ведите новый баланс: ";
	std::cin >> new_balance;
	change_balance(person1, new_balance);

	std::cout << "¬аш счЄт: " << person1.name << ", " << person1.number << ", " << person1.money << std::endl;

	return EXIT_SUCCESS;
}
