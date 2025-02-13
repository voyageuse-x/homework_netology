#include <iostream>
#include <fstream>

class address {
public:
	std::string city;
	std::string street;
	int numb_house;
	int numb_flat;
};

int main() {
	int count_adr;
	std::ifstream f_in("in.txt");
	f_in >> count_adr;

	address *adr = new address[count_adr];
	
	for (int i = 0; i < count_adr; i++) {
		f_in >> adr[i].city;
		f_in >> adr[i].street;
		f_in >> adr[i].numb_house;
		f_in >> adr[i].numb_flat;
	}
	f_in.close();
	std::ofstream f_out("out.txt");
	f_out << count_adr << std::endl;
	for (int i = count_adr - 1; i >= 0; i--) {
		f_out << adr[i].city << ", " << adr[i].street << ", " << adr[i].numb_house << ", " << adr[i].numb_flat << std::endl;

	}
	f_out.close();
	delete[] adr;
	return EXIT_SUCCESS;

}