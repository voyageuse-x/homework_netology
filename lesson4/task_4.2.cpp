#include <iostream>
#include <string>


class Triangle {
protected:
	std::string name = "Треугольник";
	int a, b, c;
	int A, B, C;
public:
	Triangle() {
		a = 10;
		b = 20;
		c = 30;
		A = 50;
		B = 60;
		C = 70;
	}
	std::string get_name() {
		return name;
	}
	int get_a() {
		return a;
	}
	int get_b() {
		return b;
	}
	int get_c() {
		return c;
	}
	int get_A() {
		return A;
	}
	int get_B() {
		return B;
	}
	int get_C() {
		return C;
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


class Quadrilateral {
protected:
	std::string name = "Четырехугольник";
	int a, b, c, d;
	int A, B, C, D;
public:
	Quadrilateral() {
		a = 10;
		b = 20;
		c = 30;
		d = 40;
		A = 50;
		B = 60;
		C = 70;
		D = 80;
	}
	std::string get_name() {
		return name;
	}
	int get_a() {
		return a;
	}
	int get_b() {
		return b;
	}
	int get_c() {
		return c;
	}
	int get_d() {
		return d;
	}
	int get_A() {
		return A;
	}
	int get_B() {
		return B;
	}
	int get_C() {
		return C;
	}
	int get_D() {
		return D;
	}

};
class Rectangle : public Quadrilateral{
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
void print_info_triangle(Triangle *ptr_class) {
	std::cout << "\n" << ptr_class->get_name() << ": \nСтороны: a = " << ptr_class->get_a() << " b = " << ptr_class->get_b() << " c = " << ptr_class->get_c() << std::endl;
	std::cout << "Углы: A = " << ptr_class->get_A() << " B = " << ptr_class->get_B() << " C = " << ptr_class->get_C() << std::endl;
}

void print_info_rectangle(Quadrilateral* ptr_class) {
	std::cout << "\n" << ptr_class->get_name() << ": \nСтороны: a = " << ptr_class->get_a() << " b = " << ptr_class->get_b() << " c = " << ptr_class->get_c() << " d = " << ptr_class->get_d() << std::endl;
	std::cout << "Углы: A = " << ptr_class->get_A() << " B = " << ptr_class->get_B() << " C = " << ptr_class->get_C() << " D = " << ptr_class->get_D() << std::endl;

}
int main() {
	setlocale(LC_ALL, "ru");

	Triangle tr;
	Triangle* ptr_tr = &tr;
	print_info_triangle(ptr_tr);

	Right_angled_triangle rat;
	Triangle* ptr_rat = &rat;
	print_info_triangle(ptr_rat);

	Isosceles_triangle it;
	Triangle* ptr_it = &it;
	print_info_triangle(ptr_it);

	Equilateral_triangle et;
	Triangle* ptr_et = &et;
	print_info_triangle(ptr_et);

	Quadrilateral ql;
	Quadrilateral* ptr_ql = &ql;
	print_info_rectangle(ptr_ql);


	Rectangle rec;
	Quadrilateral* ptr_rec = &rec;
	print_info_rectangle(ptr_rec);

	Quadrant quadr;
	Quadrilateral* ptr_quadr = &quadr;
	print_info_rectangle(ptr_quadr);

	Parallelogram par;
	Quadrilateral* ptr_par = &par;
	print_info_rectangle(ptr_par);

	Rhomb rhomb;
	Quadrilateral* ptr_rhomb = &rhomb;
	print_info_rectangle(ptr_rhomb);

	return EXIT_SUCCESS;
}