#include "Quadrilateral.h"

Quadrilateral::Quadrilateral()
{
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
std::string Quadrilateral::get_name() {
	return name;
}
int Quadrilateral::get_a() {
	return a;
}
int Quadrilateral::get_b() {
	return b;
}
int Quadrilateral::get_c() {
	return c;
}
int Quadrilateral::get_d() {
	return d;
}
int Quadrilateral::get_A() {
	return A;
}
int Quadrilateral::get_B() {
	return B;
}
int Quadrilateral::get_C() {
	return C;
}
int Quadrilateral::get_D() {
	return D;
}
