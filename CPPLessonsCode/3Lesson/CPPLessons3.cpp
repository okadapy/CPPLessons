#include <iostream>
#include <vector>
#include <string>
#include "human.h"
#include "student.h"
#include "teacher.h"
using namespace std;

int main() {
	vector<int> scores;
    scores.push_back(5);
    scores.push_back(3);
    scores.push_back(2);
    scores.push_back(2);
    scores.push_back(5);
    scores.push_back(3);
    scores.push_back(3);
    scores.push_back(3);
    scores.push_back(3);

    student* stud = new student("shilenko", "alex", "vyacheslavovich", scores);
    cout << stud->get_fullname() << endl;
    cout << stud->get_average() << endl;

    unsigned int work_time = 10;
    teacher* teach = new teacher("shilenko", "vyacheslav", "georgievich", work_time);
    cout << teach->get_fullname() << endl;
    cout << teach->get_worktime() << endl;


    delete stud;
    return 0;
}