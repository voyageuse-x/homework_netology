#pragma once
#include <string>
class Triangle
{
protected:
	std::string name;
	int a, b, c;
	int A, B, C;
public:
	Triangle();
	std::string get_name();
	int get_a();
	int get_b();
	int get_c();
	int get_A();
	int get_B();
	int get_C();
};

