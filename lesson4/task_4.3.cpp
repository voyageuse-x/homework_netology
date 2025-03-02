#include <string>
#include <iostream>

class Figure {
protected:
	int count_sides;
	std::string name;
public:
	Figure() {
		count_sides = 0;
		name = "Фигура";
	}

	virtual bool check() {
		if (count_sides == 0) {
			return true;
		}
		else {
			return false;
		}
	}
	virtual void print_info() {
		std::cout << "\n" << name << ": " << std::endl;
		if (check()) {
			std::cout << "Правильный" << std::endl;
		}
		else {
			std::cout << "Неправильный" << std::endl;
		}
		std::cout << "Количество сторон: " << count_sides << std::endl;
		return;
	}
};

class Triangle : public Figure {
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
	void print_info() override {
		Figure::print_info();
		std::cout << "Стороны: a = " << a << " b = " << b << " c = " << c << std::endl;
		std::cout << "Углы: A = " << A << " B = " << B << " C = " << C << std::endl;
		return;
	}

	virtual bool check() override {
		bool is_valid = (count_sides == 3 && (A + B + C) == 180);
		return is_valid;
	}
};
class Right_angled_triangle : public Triangle {
public:
	Right_angled_triangle() {
		name = "Прямоугольный треугольник";
		C = 90;
	}
	bool check() override {
		bool is_valid = (Triangle::check() && C == 90);
		return is_valid;
	}
};
class Isosceles_triangle : public Triangle {
public:
	Isosceles_triangle() {
		name = "Равнобедренный треугольник";
		c = a;
		A = C;
	}
	bool check() override {
		bool is_valid = (Triangle::check() && a == c && A == C);
		return is_valid;
	}
};
class Equilateral_triangle : public Triangle {
public:
	Equilateral_triangle() {
		name = "Равносторонний треугольний";
		a = b = c;
		A = B = C = 60;
	}
	bool check() override {
		bool is_valid = (Triangle::check() && a == c && b == c && A == 60 && B == 60 && C == 60);
		return is_valid;
	}
};

class Quadrilateral : public Figure {
protected:
	int a, b, c, d;
	int A, B, C, D;
public:
	Quadrilateral() {
		name = "Четырехугольник";
		count_sides = 4;
		a = 10;
		b = 20;
		c = 30;
		d = 40;
		A = 50;
		B = 60;
		C = 70;
		D = 80;
	}
	void print_info() override {
		Figure::print_info();
		std::cout << "Стороны: a = " << a << " b = " << b << " c = " << c << " d = " << d << std::endl;
		std::cout << "Углы: A = " << A << " B = " << B << " C = " << C << " D = " << D << std::endl;
		return;
	}

	virtual bool check() override {
		bool is_valid = (count_sides == 4 && (A + B + C + D) == 360);
		return is_valid;
	}
};
class Rectangle : public Quadrilateral {
public:
	Rectangle() {
		name = "Прямоугольник";
		a = c;
		b = d;
		A = B = C = D = 90;
	}
	bool check() override {
		bool is_valid = (Quadrilateral::check() && a == c && b == d && A == 90 && B == 90 && C == 90 && D == 90);
		return is_valid;
	}
};
class Quadrant : public Quadrilateral {
public:
	Quadrant() {
		name = "Квадрат";
		a = b = c = d;
		A = B = C = D = 90;
	}
	bool check() {
		bool is_valid = (Quadrilateral::check() && a == b && b == c && c == d && A == 90 && B == 90 && C == 90 && D == 90);
		return is_valid;
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
	bool check() {
		bool is_valid = (Quadrilateral::check() && a == c && b == d && A == C && B == D);
		return is_valid;
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
	bool check() {
		bool is_valid = (Quadrilateral::check() && a == b && b == c && c == d && A == C && B == D);
		return is_valid;
	}
};


int main() {
	setlocale(LC_ALL, "ru");
	Figure fig;
	Figure* ptr_fig = &fig;
	ptr_fig->print_info();

	Triangle tr;
	Figure* ptr_tr = &tr;
	ptr_tr->print_info();

	Right_angled_triangle rat;
	Figure* ptr_rat = &rat;
	ptr_rat->print_info();

	Isosceles_triangle it;
	Figure* ptr_it = &it;
	ptr_it->print_info();

	Equilateral_triangle et;
	Figure* ptr_et = &et;
	ptr_et->print_info();

	Quadrilateral quadr;
	Figure* ptr_quadr = &quadr;
	ptr_quadr->print_info();

	Rectangle rec;
	Figure* ptr_rec = &rec;
	ptr_rec->print_info();

	Quadrant q;
	Figure* ptr_q = &q;
	ptr_q->print_info();

	Parallelogram par;
	Figure* ptr_par = &par;
	ptr_par->print_info();

	Rhomb rhomb;
	Figure* ptr_rhomb = &rhomb;
	ptr_rhomb->print_info();


	return EXIT_SUCCESS;
}
