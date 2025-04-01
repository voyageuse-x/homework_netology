#include <iostream>
#include <string>
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
	int gcd(int a, int b) {
		a = abs(a), b = abs(b);
		if (b == 0)return a;
		else return gcd(b, a % b);
	}
	std::string reduction(int a, int b) {
		int x = gcd(a, b);
		a /= x;
		b /= x;
		return (std::to_string(a) + "/" + std::to_string(b));
	}


	std::string show() {
		return std::to_string(numerator_) + "/" + std::to_string(denominator_);
	}
	std::string operator + (const Fraction& other) {
		int new_num = this->numerator_ * other.denominator_ + other.numerator_ * this->denominator_;
		int new_denom = this->denominator_ * other.denominator_;
		return reduction(new_num, new_denom);
	}
	std::string operator - (const Fraction& other) {
		int new_num = this->numerator_ * other.denominator_ - other.numerator_ * this->denominator_;
		int new_denom = this->denominator_ * other.denominator_;
		return reduction(new_num, new_denom);
		
	}
	std::string operator * (const Fraction& other) {
		int new_num = this->numerator_ * other.numerator_;
		int new_denom = this->denominator_ * other.denominator_;
		return reduction(new_num, new_denom);
		
	}
	std::string operator / (const Fraction& other) {
		int new_num = this->numerator_ * other.denominator_;
		int new_denom = this->denominator_ * other.numerator_;
		return reduction(new_num, new_denom);
		
	}
	Fraction& operator ++ () {
		numerator_ = this->numerator_ + this->denominator_;
		denominator_ = this->denominator_;
		return *this;
	}
	Fraction& operator++(int value) // постфиксный
	{
		Fraction Temp(*this);
		numerator_ = this->numerator_ + this->denominator_;
		denominator_ = this->denominator_;
		return Temp;
	}

	Fraction& operator -- () {
		numerator_ = this->numerator_ - this->denominator_;
		denominator_ = this->denominator_;
		return *this;
	}
	Fraction& operator--(int value) // постфиксный
	{
		Fraction Temp(*this);
		numerator_ = this->numerator_ - this->denominator_;
		denominator_ = this->denominator_;
		return Temp;
	}
 };

int main()
{
	setlocale(LC_ALL, "ru");
	int n1, d1, n2, d2;
	std::cout << "Введите числитель дроби 1: ";
	std::cin >> n1;
	std::cout << "Введите знаменатель дроби 1:";
	std::cin >> d1;

	std::cout << "Введите числитель дроби 2: ";
	std::cin >> n2;
	std::cout << "Введите знаменатель дроби 2:";
	std::cin >> d2;

	Fraction f1(n1, d1);
	Fraction f2(n2, d2);

	std::cout << f1.show() << " + " << f2.show() << " = " << (f1 + f2) << std::endl;
	std::cout << f1.show() << " - " << f2.show() << " = " << (f1 - f2) << std::endl;
	std::cout << f1.show() << " * " << f2.show() << " = " << (f1 * f2) << std::endl;
	std::cout << f1.show() << " / " << f2.show() << " = " << (f1 / f2) << std::endl;
	std::cout << "++" << f1.show() << " * " << f2.show() << " = " << (++f1 * f2) << std::endl;
	std::cout << "Значение дроби 1 =  " << f1.show() << std::endl;
	std::cout << f1.show() << "--" << " * " << f2.show() << " = " << (f1-- * f2) << std::endl;
	std::cout << "Значение дроби 1 =  " << f1.show() << std::endl;
	return 0;
}






