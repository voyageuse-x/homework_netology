#include <iostream>

struct address {
	std::string city;
	std::string street;
	int house_number;
	int flat_number;
	int index;
};
void print_struct(address adr) {
		std::cout << "�����: " << adr.city << std::endl;
		std::cout << "�����: " << adr.street << std::endl;
		std::cout << "����� ����: " << adr.house_number << std::endl;
		std::cout << "����� ��������: " << adr.flat_number << std::endl;
		std::cout << "������: " << adr.index << std::endl;
		return;
	}
int main() {
	setlocale(LC_ALL, "ru");
	address adr1 = {"������", "�����", 12, 8, 123456};
	address adr2 = {"������", "�������", 59, 143, 953769};
	print_struct(adr1);
	std::cout << std::endl;
	print_struct(adr2);
	

	return EXIT_SUCCESS;
}