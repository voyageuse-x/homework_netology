#include "Rectangle.h"

Rectangle::Rectangle()
{
	name = "�������������";
	a = c;
	b = d;
	A = B = C = D;

	if (a != c || b != d) {
		throw FigureException("������� ������� �� �����");
	}

	if (A != B || B != C || C != D || D != A || A != 90) {
		throw FigureException("���� �� ����� 90");
	}
}
