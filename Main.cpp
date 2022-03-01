//
// Created by Maikol Guzman Alan on 2/28/22.
//
#include <iostream>
#include "Student.h"
#include "Teacher.h"

using namespace std;

int main() {
    std::cout << "Welcome to the UNA! (VIRTUAL)\n" << std::endl;

    Student student;
    std::cout << "Student: " + student.speak() << std::endl;
    std::cout << "Study: " + student.study() + "\n" << std::endl;

    Teacher teacher;
    std::cout << "Teacher: " + teacher.speak() << std::endl;
    std::cout << "Teach: " + teacher.teach() << std::endl;

    return 0;
}