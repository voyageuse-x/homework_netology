#include "Rectangle.h"

Rectangle::Rectangle()
{
	name = "Прямоугольник";
	a = c;
	b = d;
	A = B = C = D;

	if (a != c || b != d) {
		throw FigureException("стороны попарно не равны");
	}

	if (A != B || B != C || C != D || D != A || A != 90) {
		throw FigureException("углы не равны 90");
	}
}
