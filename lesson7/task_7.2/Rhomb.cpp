#include "Rhomb.h"
Rhomb::Rhomb() {
	name = "Ромб";
	a = b = c = d;
	A = C;
	B = D;

	if (a != b || b != c || c != d || d != a) {
		throw FigureException("стороны не равны друг другу");
	}
	if (A != C || B != D) {
		throw FigureException("углы попарно не равны");
	}

}
