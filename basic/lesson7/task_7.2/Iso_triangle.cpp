#include "Iso_triangle.h"

Iso_triangle::Iso_triangle()
{
	name = "Равнобедренный треугольник";
	c = a;
	A = 79;

	if (c != a) {
		throw FigureException("стороны a и c не равны");
	}
	if (A != C) {
		throw FigureException("угла А и С не равны");
	}
}
