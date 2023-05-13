#pragma once
#include <iostream>

class simple_fraction
{
public:
	simple_fraction(int numerator, int denominator);
	double operator+ (int val) { return value() + val; }
	double operator- (int val) { return value() - val; }
	double operator* (int val) { return value() * val; }
	double operator/ (int val) {
		if (val != 0) return value() / val;
		else throw std::runtime_error("ZeroDivision");
	}
	simple_fraction operator+ (simple_fraction val) {
		int hash = this->denominator;
		
		this->numerator *= val.denominator;
		this->denominator *= val.denominator;
		val.numerator *= hash;
		simple_fraction fraction(val.numerator + this->numerator, this->denominator);
		return fraction;
	}

	double value();
private:
	int numerator;
	int denominator;
};

