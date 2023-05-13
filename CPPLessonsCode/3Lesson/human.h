#pragma once
#include <string>
#include <sstream>
using namespace std;


class human
{
public:
	human(string last_name, string first_name, string second_name);
	string get_fullname();

private:
	string first_name;
	string second_name;
	string last_name;
};

