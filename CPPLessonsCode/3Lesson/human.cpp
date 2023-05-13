#include "human.h"
#include <sstream>
#include <string>
using namespace std;

human::human(string last_name, string first_name, string second_name) {
	this->last_name = last_name;
	this->first_name = first_name;
	this->second_name = second_name;
}

string human::get_fullname() {
	ostringstream fullname;
	fullname << this->last_name << " "
		<< this->first_name << " " 
		<< this->second_name;
	return fullname.str();
}