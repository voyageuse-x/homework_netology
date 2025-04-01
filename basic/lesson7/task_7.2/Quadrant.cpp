#include "Quadrant.h"

Quadrant::Quadrant()
{
	name = "�������";
	a = b = c = d;
	A = B = C = D = 90;

	if (a != b || b != c || c != d || d != a) {
		throw FigureException("������� �� ����� ���� �����");
	}
	if (A != B || B != C || C != D || D != A || A != 90) {
		throw FigureException("���� �� ����� 90");
	}
}
