#include "Rhomb.h"
Rhomb::Rhomb() {
	name = "����";
	a = b = c = d;
	A = C;
	B = D;

	if (a != b || b != c || c != d || d != a) {
		throw FigureException("������� �� ����� ���� �����");
	}
	if (A != C || B != D) {
		throw FigureException("���� ������� �� �����");
	}

}
