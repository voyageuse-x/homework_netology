#include "Equil_triangl.h"


Equil_triangl::Equil_triangl(){
	name = "�������������� �����������";
	a = b = c;
	A = B = C = 60;
	

	if (a != b || b != c || c != a) {
		throw FigureException("������� �� ����� ���� �����");
	}
	if (A != B || B != C || C != A) {
		throw FigureException("���� �� ����� ���� �����");
	}
}