#include "Parallelogram.h"

Parallelogram::Parallelogram()
{
	name = "Параллелограмм";
	a = c;
	b = d;
	A = C;
	B = D;

	if (a != c || b != d) {
		throw FigureException("стороны попарно не равны");
	}
	if (A != C || B != D) {
		throw FigureException("углы попарно не равны");
	}
}
