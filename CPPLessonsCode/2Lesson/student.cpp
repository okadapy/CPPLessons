#include "student.h"
#include <string>
#include <fstream>

Student::Student(std::string name, std::string last_name) {
    Student::set_name(name);
    Student::set_lastname(last_name);
}

Student::~Student() {
    Student::save();
}

void Student::set_name(std::string student_name) {
    Student::first_name = student_name;
}
std::string Student::get_name() {
    return Student::first_name;
}
void Student::set_lastname(std::string student_lastname) {
    Student::last_name = student_lastname;
}
std::string Student::get_lastname() {
    return Student::last_name;
}
void Student::set_scores(int student_scores[]) {
    for (int i = 0; i < 5; i++) {
        Student::scores[i] = student_scores[i];
    }
    Student::calculateAverageBall();
}
void Student::calculateAverageBall() {
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += Student::scores[i];
    }

    Student::average_ball = sum / 5.0;
}
float Student::get_ball() {
    return Student::average_ball;
}

void Student::save() {
    std::ofstream fout("students.txt", std::ios::app);
    fout << Student::get_name() << " "
        << Student::get_lastname() << " ";
    for (int i = 0; i < 5; i++) {
        fout << Student::scores[i] << " ";
    }

    fout << "Average: " << Student::average_ball << std::endl;
    fout.close();
}