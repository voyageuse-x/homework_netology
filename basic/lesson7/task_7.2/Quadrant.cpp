#include "Quadrant.h"

Quadrant::Quadrant()
{
	name = " вадрат";
	a = b = c = d;
	A = B = C = D = 90;

	if (a != b || b != c || c != d || d != a) {
		throw FigureException("стороны не равны друг другу");
	}
	if (A != B || B != C || C != D || D != A || A != 90) {
		throw FigureException("углы не равны 90");
	}
}
