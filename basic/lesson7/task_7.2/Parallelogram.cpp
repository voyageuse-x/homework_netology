#include "Parallelogram.h"

Parallelogram::Parallelogram()
{
	name = "��������������";
	a = c;
	b = d;
	A = C;
	B = D;

	if (a != c || b != d) {
		throw FigureException("������� ������� �� �����");
	}
	if (A != C || B != D) {
		throw FigureException("���� ������� �� �����");
	}
}
