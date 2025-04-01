#include "Triangle.h"
#include "Class_exception.h"
#include <string>
#include <iostream>
#include <exception>

Triangle::Triangle()
{
	
		name = "Треугольник";
		count_sides = 3;
		a = 10;
		b = 20;
		c = 30;
		A = 50;
		B = 60;
		C = 70;
		
		if ((A + B + C) != 180) {
			throw FigureException("сумма углов не равна 180");
		}
		if (count_sides != 3) {
			throw FigureException("количество сторон не равно 3");
		}
	
}

std::string Triangle::get_name()
{
	return name;
}
int Triangle::get_a() {
	return a;
}
int Triangle::get_b() {
	return b;
}
int Triangle::get_c() {
	return c;
}
int Triangle::get_A() {
	return A;
}
int Triangle::get_B() {
	return B;
}
int Triangle::get_C() {
	return C;
}
