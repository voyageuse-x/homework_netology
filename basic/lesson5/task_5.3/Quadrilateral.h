#pragma once
#include "string"
class Quadrilateral
{
protected:
	std::string name;
	int a, b, c, d;
	int A, B, C, D;
public:
	Quadrilateral();
	std::string get_name();
	int get_a();
	int get_b();
	int get_c();
	int get_d();
	int get_A();
	int get_B();
	int get_C();
	int get_D();
};

