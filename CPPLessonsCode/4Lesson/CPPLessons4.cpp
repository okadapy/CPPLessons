#include <iostream>

//function overload basics
int max(int num1, int num2) 
{
    if (num1 > num2) return num1;
    return num2;
}

double max(double num1, double num2)
{
    if (num1 > num2) return num1;
    return num2;
}

int overload()
{
    double i = 5.1;
    double j = 2.5;

    int x = 5;
    int y = 2;

    //calls "int max" for int values and "double max" for double values.
    std::cout << max(x, y) << std::endl;
    std::cout << max(i, j) << std::endl;
    return 0;
}

//method overload
class decimal {
public:
    decimal(std::string number) {
        std::clog << "First constructor called!\n";
    }
    decimal(double number) {
        std::clog << "Second constructor called!\n";
    }
};

int method_overload() {
    decimal("1.1");
    decimal(1.1);
    return 0;
}

class student {
public:
    student(std::string name, std::string surname) {
        std::clog << name << " is string type " << surname << " is string type" << std::endl;
    }
    student(std::string name, unsigned int year_of_birth) {
        std::clog << name
            << " is string type " << year_of_birth
            << " is numeric\n" << "Approximation of age: " << year - year_of_birth << std::endl;
    }

private:
    unsigned int year = 2023;
};

int main() {
    std::string name = "Ivan";
    std::string surname = "Fedorov";
    unsigned int year_of_birth = 2005;

    student* two_strings = new student(name, surname);
    student* string_and_int = new student(name, year_of_birth);
    delete two_strings, string_and_int;
    return 0;
}