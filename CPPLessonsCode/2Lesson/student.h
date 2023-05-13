#pragma once
#include <string>

class Student {
public:

    Student(std::string name, std::string last_name);

    ~Student();

    void set_name(std::string);

    std::string get_name();

    void set_lastname(std::string);

    std::string get_lastname();

    void set_scores(int scores[]);

    void calculateAverageBall();

    float get_ball();

    void save();

private:
    float average_ball;
    std::string first_name;
    std::string last_name;
    int scores[5];
};
