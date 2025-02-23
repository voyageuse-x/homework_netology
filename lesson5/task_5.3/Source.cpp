#include <iostream>
#include "Triangle.h"
#include "Equil_triangl.h"
#include "Iso_triangle.h"
#include "Parallelogram.h"
#include "Quadrant.h"
#include "Quadrilateral.h"
#include "R_angl_triangle.h"
#include "Rectangle.h"
#include "Rhomb.h"

void print_info_triangle(Triangle* ptr_class) {
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

	R_angl_triangle rat;
	Triangle* ptr_rat = &rat;
	print_info_triangle(ptr_rat);

	Iso_triangle it;
	Triangle* ptr_it = &it;
	print_info_triangle(ptr_it);

	Equil_triangl et;
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
