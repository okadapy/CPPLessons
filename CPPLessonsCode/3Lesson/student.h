#pragma once
#include "human.h"
#include <vector>
#include <string>
using namespace std;

class student : public human
{
public:
	student(
		string last_name,
		string name,
		string second_name,
		vector<int> scores
	) :human(last_name,
		name,
		second_name) {
		this->scores = scores;
	};

	float get_average() {
		unsigned int count_scores = this->scores.size();
		unsigned int sum_scores = 0;
		float average;
		for (int i = 0; i < count_scores; i++) {
			sum_scores += this->scores[i];
		}
		average = (float)sum_scores / (float)count_scores;
		return average;
	}

private:
	vector<int> scores;
};

