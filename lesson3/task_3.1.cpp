#include <iostream>
#include <fstream>

class address {

	std::string city;
	std::string street;
	std::string numb_house;
	std::string numb_flat;
public:
	address() {
		city = "city";
		street = "street";
		numb_house = "1";
		numb_flat = "1";
	}
	void set_address(std::string city, std::string street, std::string numb_house, std::string numb_flat) {
		this->city = city;
		this->street = street;
		this->numb_house = numb_house;
		this->numb_flat = numb_flat;

	}
	std::string get_address() {
		return city + ", " + street + ", " + numb_house + ", " + numb_flat;
	}
};

int main() {
	int count_adr;

	std::string city;
	std::string street;
	std::string numb_house;
	std::string numb_flat;

	std::ifstream f_in("in.txt");
	f_in >> count_adr;

	address* adr = new address[count_adr];

	for (int i = 0; i < count_adr; i++) {
		f_in >> city;
		f_in >> street;
		f_in >> numb_house;
		f_in >> numb_flat;
		adr[i].set_address(city, street, numb_house, numb_flat);
	}
	f_in.close();
	std::ofstream f_out("out.txt");
	f_out << count_adr << std::endl;
	for (int i = count_adr - 1; i >= 0; i--) {
		f_out << adr[i].get_address() << std::endl; 

	}
	f_out.close();
	delete[] adr;
	return EXIT_SUCCESS;

}
