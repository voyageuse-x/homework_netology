#include <iostream>
#include <iostream>

class Figure {
public:
	int get_num_sides() {
		return num_sides;
	}
	std::string get_name() {
		return name;
	}
	Figure() {
		name = "Фигура";
		num_sides = 0;
	}
protected:
	std::string name;
	int num_sides{};

};

class Triangle : public Figure {
public:
	Triangle() {
		name = "Треугольник";
		num_sides = 3;
	}
};
class Quard : public Figure {
public:
	Quard() {
		name = "Четырехугольник";
		num_sides = 4;
	}
};


int main() {
	setlocale(LC_ALL, "ru");
	Figure figr;
	Triangle trian;
	Quard quard;

	std::cout << "Количество сторон: " << std::endl;
	std::cout << figr.get_name() << ": " << figr.get_num_sides() << std::endl;
	std::cout << trian.get_name() << ": " << trian.get_num_sides() << std::endl;
	std::cout << quard.get_name() <<": " << quard.get_num_sides() << std::endl;
	return EXIT_SUCCESS;
}
