#include <iostream>
#include <string>
#include "student.h"

//dynamic ram usage
int dynamic_shit()
{
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    int* p_array = new int[num];
    for (int i = 0; i < num; i++) {
        p_array[i] = i+1;
        std::cout << "Value of " << i << " element = " << p_array[i] << std::endl;
    }
    delete[] p_array;
    return 0;
}


//sys argvs
int argv_reader(int argc, char* argv[]) {
    for (int i = 0; i < argc; i++) {
        std::cout << "Argument " << i << " is " << argv[i] << std::endl;
    }
    return 0;
}

//classes
int classesShowcase() {

    std::string name;
    std::string last_name;

    std::cout << "Enter your name: ";
    getline(std::cin, name);
    std::cout << "Enter your lastname: ";
    getline(std::cin, last_name);
    
    Student student(name, last_name);

    int scores[5];
    for (int i = 0; i < 5; i++) {
        std::cout << "Score " << i + 1 << ": ";
        std::cin >> scores[i];
    };
    student.set_scores(scores);

    std::cout << "Average score for "
        << student.get_name() << " "
        << student.get_lastname() << " is "
        << student.get_ball() << std::endl;

    return 0;
}

//classes and pointers showcase
int main(int argc, char* argv[]) {
    std::string name;
    std::string last_name;

    std::cout << "Enter student's name: ";
    getline(std::cin, name);
    std::cout << "Enter student's lastname: ";
    getline(std::cin, last_name);

    int scores[5];

    Student* student = new Student(name, last_name);
    for (int i = 0; i < 5; i++) {
        std::cout << "Score " << i + 1 << " is ";
        std::cin >> scores[i];
    }
    student->set_scores(scores);

    std::cout << "Average score for student "
        << student->get_name() << " "
        << student->get_lastname() << " is "
        << student->get_ball() << std::endl;

    delete student;
    return 0;
}