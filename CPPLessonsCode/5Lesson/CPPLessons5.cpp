#include <iostream>
#include "simple_fraction.h"
using namespace std;



int main()
{
    simple_fraction fr1 =  simple_fraction(5, 10);
    simple_fraction fr2 =  simple_fraction(4, 3);
    simple_fraction fr3 = fr1 + fr2;
    cout << fr3.value() << endl;
    
}

