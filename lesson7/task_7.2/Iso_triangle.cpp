#include "Iso_triangle.h"

Iso_triangle::Iso_triangle()
{
	name = "�������������� �����������";
	c = a;
	A = 79;

	if (c != a) {
		throw FigureException("������� a � c �� �����");
	}
	if (A != C) {
		throw FigureException("���� � � � �� �����");
	}
}
