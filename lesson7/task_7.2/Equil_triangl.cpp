#include "Equil_triangl.h"


Equil_triangl::Equil_triangl(){
	name = "–авносторонний треугольний";
	a = b = c;
	A = B = C = 60;
	

	if (a != b || b != c || c != a) {
		throw FigureException("стороны не равны друг другу");
	}
	if (A != B || B != C || C != A) {
		throw FigureException("углы не равны друг другу");
	}
}