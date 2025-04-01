#include <string>
#include <iostream>

class Figure {
protected:
	int count_sides;
	std::string name = "Фигура";
public:
	virtual void print() {
		return;
	}
	
};

class Triangle: public Figure {
protected:
	int a, b, c;
	int A, B, C;
public:
	Triangle() {
		count_sides = 3;
		name = "Треугольник";
		a = 10;
		b = 20;
		c = 30;
		A = 50;
		B = 60;
		C = 70;
	}
	void print() override{
		std::cout << "\n" << name << ": \nСтороны: a = " << a << " b = " << b << " c = " << c << std::endl;
		std::cout << "Углы: A = " << A << " B = " << B << " C = " << C << std::endl;

	}
};

class Right_angled_triangle : public Triangle {
public:
	Right_angled_triangle() {
		name = "Прямоугольный треугольник";
		C = 90;
	}
};
class Isosceles_triangle : public Triangle {
public:
	Isosceles_triangle() {
		name = "Равнобедренный треугольник";
		c = a;
		A = C;
	}
};
class Equilateral_triangle : public Triangle {
public:
	Equilateral_triangle() {
		name = "Равносторонний треугольний";
		a = b = c;
		A = B = C = 60;
	}
};


class Quadrilateral: public Figure {
protected:
	int a, b, c, d;
	int A, B, C, D;
public:
	Quadrilateral() {
		count_sides = 4;
		name = "Четырехугольник";
		a = 10;
		b = 20;
		c = 30;
		d = 40;
		A = 50;
		B = 60;
		C = 70;
		D = 80;
	}
	void print() override {
		std::cout << "\n" << name << ": \nСтороны: a = " << a << " b = " << b << " c = " << c << " d = "<< d<< std::endl;
		std::cout << "Углы: A = " << A << " B = " << B << " C = " << C << " D = " << D << std::endl;

	}

};
class Rectangle : public Quadrilateral {
public:
	Rectangle() {
		name = "Прямоугольник";
		a = c;
		b = d;
		A = B = C = D;
	}
};
class Quadrant : public Quadrilateral {
public:
	Quadrant() {
		name = "Квадрат";
		a = b = c = d;
		A = B = C = D = 90;
	}
};
class Parallelogram : public Quadrilateral {
public:
	Parallelogram() {
		name = "Параллелограмм";
		a = c;
		b = d;
		A = C;
		B = D;
	}
};
class Rhomb : public Quadrilateral {
public:
	Rhomb() {
		name = "Ромб";
		a = b = c = d;
		A = C;
		B = D;

	}
};
void print_info(Figure* ptr_class) {
	 ptr_class->print();
}
int main() {
	setlocale(LC_ALL, "ru");
	
	Triangle tr;
	Figure* ptr_tr = &tr;
	print_info(ptr_tr);

	Right_angled_triangle rat;
	Figure* ptr_rat = &rat;
	print_info(ptr_rat);

	Isosceles_triangle it;
	Figure* ptr_it = &it;
	print_info(ptr_it);

	Equilateral_triangle et;
	Figure* ptr_et = &et;
	print_info(ptr_et);

	Quadrilateral ql;
	Figure* ptr_ql = &ql;
	print_info(ptr_ql);


	Rectangle rec;
	Figure* ptr_rec = &rec;
	print_info(ptr_rec);

	Quadrant quadr;
	Figure* ptr_quadr = &quadr;
	print_info(ptr_quadr);

	Parallelogram par;
	Figure* ptr_par = &par;
	print_info(ptr_par);

	Rhomb rhomb;
	Figure* ptr_rhomb = &rhomb;
	print_info(ptr_rhomb);

	return EXIT_SUCCESS;
}
