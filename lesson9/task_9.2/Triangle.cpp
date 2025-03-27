#include "Triangle.h"

Triangle::Triangle()
{
	name = "Треугольник";
	a = 10;
	b = 20;
	c = 30;
	A = 50;
	B = 60;
	C = 70;
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
