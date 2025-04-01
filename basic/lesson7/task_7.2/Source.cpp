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
#include "Class_exception.h"

void print_info_triangle(Triangle* ptr_class) {
	std::cout << "\n" << ptr_class->get_name() << ": \n (стороны: " << ptr_class->get_a() << ", " << ptr_class->get_b() << ", " << ptr_class->get_c();
	std::cout << " углы: " << ptr_class->get_A() << ", " << ptr_class->get_B() << ", " << ptr_class->get_C() << ") создан" << std::endl;
}

void print_info_rectangle(Quadrilateral* ptr_class) {
	std::cout << "\n" << ptr_class->get_name() << ": \n (стороны: " << ptr_class->get_a() << ", " << ptr_class->get_b() << ", " << ptr_class->get_c() << ",  " << ptr_class->get_d();
	std::cout << " углы: " << ptr_class->get_A() << ", " << ptr_class->get_B() << ", " << ptr_class->get_C() << ", " << ptr_class->get_D() << ") создан" << std::endl;

}

int main() {
	setlocale(LC_ALL, "ru");

	try {
		Triangle tr;
		Triangle* ptr_tr = &tr;
		print_info_triangle(ptr_tr);
	}
	catch (std::domain_error& ex) {
		std::cout << "\nОшибка создания фигуры. Причина: " << ex.what() << std::endl;
	}
	try {
		R_angl_triangle rat;
		Triangle* ptr_rat = &rat;
		print_info_triangle(ptr_rat);
	}
	catch (std::domain_error& ex) {
		std::cout << "\nОшибка создания фигуры. Причина: " << ex.what() << std::endl;
	}
	try {
		Iso_triangle it;
		Triangle* ptr_it = &it;
		print_info_triangle(ptr_it);
	}
	catch (std::domain_error& ex) {
		std::cout << "\nОшибка создания фигуры. Причина: " << ex.what() << std::endl;
	}
	try {
		Equil_triangl et;
		Triangle* ptr_et = &et;
		print_info_triangle(ptr_et);
	}
	catch (std::domain_error& ex) {
		std::cout << "\nОшибка создания фигуры. Причина: " << ex.what() << std::endl;
	}
	try {
		Quadrilateral ql;
		Quadrilateral* ptr_ql = &ql;
		print_info_rectangle(ptr_ql);
	}
	catch (std::domain_error& ex) {
		std::cout << "\nОшибка создания фигуры. Причина: " << ex.what() << std::endl;
	}
	try {
		Rectangle rec;
		Quadrilateral* ptr_rec = &rec;
		print_info_rectangle(ptr_rec);
	}
	catch (std::domain_error& ex) {
		std::cout << "\nОшибка создания фигуры. Причина: " << ex.what() << std::endl;
	}
	try {
		Quadrant quadr;
		Quadrilateral* ptr_quadr = &quadr;
		print_info_rectangle(ptr_quadr);
	}
	catch (std::domain_error& ex) {
		std::cout << "\nОшибка создания фигуры. Причина: " << ex.what() << std::endl;
	}
	try {
		Parallelogram par;
		Quadrilateral* ptr_par = &par;
		print_info_rectangle(ptr_par);
	}
	catch (std::domain_error& ex) {
		std::cout << "\nОшибка создания фигуры. Причина: " << ex.what() << std::endl;
	}
	try {
		Rhomb rhomb;
		Quadrilateral* ptr_rhomb = &rhomb;
		print_info_rectangle(ptr_rhomb);
	}
	catch (std::domain_error& ex) {
		std::cout << "\nОшибка создания фигуры. Причина: " << ex.what() << std::endl;
	}


	return EXIT_SUCCESS;
}
