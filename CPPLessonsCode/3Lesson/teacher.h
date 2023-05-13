#pragma once
#include "human.h"
using namespace std;
class teacher : public human 
{
public:
	teacher(string last_name,
		string first_name,
		string second_name,
		unsigned int work_time) : human(last_name, first_name, second_name) {
		this->work_time = work_time;
	}
	unsigned int get_worktime() {
		return this->work_time;
	}
private:
	unsigned int work_time;
};

