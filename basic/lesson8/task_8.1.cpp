#include <iostream>
#include <math.h>

class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator; //числитель
		denominator_ = denominator;
	}
	bool operator == (const Fraction& other) {
		return (abs(this->numerator_ * other.denominator_ - this->denominator_ * other.numerator_) < 0.000001);
	}
	bool operator != (const Fraction& other) {
		return !(*this == other);
	}
	bool operator < (const Fraction& other) {
		return (this->numerator_ / this->denominator_ < other.numerator_ / other.denominator_);
	}
	bool operator > (const Fraction& other) {
		return !(*this < other);
	}
	bool operator <= (const Fraction& other) {
		return (*this < other || *this == other);
	}
	bool operator >= (const Fraction& other) {
		return (!(*this < other) || *this == other);
	}
 };

int main()
{
	Fraction f1(4, 3);
	Fraction f2(6, 11);

	std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
	std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
	std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
	std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
	std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
	std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
	return 0;
}