#include "R_angl_triangle.h"

R_angl_triangle::R_angl_triangle()
{
	name = "Прямоугольный треугольник";
	C = 90;

	if (C != 90) {
		throw FigureException("угол С не равен 90");
	}
}
