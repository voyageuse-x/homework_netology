#include <iostream>

class Figure {
public:
	void set_num_sides(int n) {
		num_sides = n;
	}
	int get_num_sides() {
		return num_sides;
	}
protected:
	int num_sides{};

};

class Triangle : public Figure {
public:
	Triangle() {
		set_num_sides(3);
	}
};
class Quard : public Figure {
public:
	Quard (){
		set_num_sides(4);
	}
};


int main() {
	setlocale(LC_ALL, "ru");
	Figure figr;
	Triangle trian;
	Quard quard;

	std::cout << "Количество сторон: " << std::endl;
	std::cout << "Фигура: " << figr.get_num_sides() << std::endl;
	std::cout << "Треугольник: " << trian.get_num_sides() << std::endl;
	std::cout << "Четырехугольник: " << quard.get_num_sides() << std::endl;
	return EXIT_SUCCESS;
}
