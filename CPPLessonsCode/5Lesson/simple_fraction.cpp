#include "simple_fraction.h"
#include <iostream>

simple_fraction::simple_fraction(int numerator, int denominator) {
	this->numerator = numerator;
	if (denominator != 0) this->denominator = denominator;
	else throw std::runtime_error("ZeroDivision");
}

double simple_fraction::value() {
	return (double)this->numerator / (double)this->denominator;
}
