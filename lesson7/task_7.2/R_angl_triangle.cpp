#include "R_angl_triangle.h"

R_angl_triangle::R_angl_triangle()
{
	name = "������������� �����������";
	C = 90;

	if (C != 90) {
		throw FigureException("���� � �� ����� 90");
	}
}
