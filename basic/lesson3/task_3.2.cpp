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
	void set_adr(std::string city, std::string street, std::string numb_house, std::string numb_flat) {
		this->city = city;
		this->street = street;
		this->numb_house = numb_house;
		this->numb_flat = numb_flat;
	}
	std::string get_city() {
		return city;
	}
	std::string get_adr() {
		return city + ", " + street + ", " + numb_house + ", " + numb_flat;

	}
};

void sort(address* adr, int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (adr[j].get_city() > adr[j + 1].get_city()) {
				std::swap(adr[j], adr[j + 1]);
			}
		}
	}
	
	return;

}

int main() {
	setlocale(LC_ALL, "ru");
	int count_adr;
	std::ifstream in_f("in.txt");

	in_f >> count_adr;
	std::string city;
	std::string street;
	std::string numb_house;
	std::string numb_flat;

	address *adr = new address[count_adr];

	for (int i = 0; i < count_adr; i++) {
		in_f >> city;
		in_f >> street;
		in_f >> numb_house;
		in_f >> numb_flat;

		adr[i].set_adr(city, street, numb_house, numb_flat);
	}
	in_f.close();
	std::ofstream out_f("out.txt");
	out_f << count_adr << std::endl;

	sort(adr, count_adr);
	
	for (int i = 0; i < count_adr; i++) {
		out_f << adr[i].get_adr() << std::endl;
	}
	out_f.close();
	delete[] adr;
	return EXIT_SUCCESS;

}