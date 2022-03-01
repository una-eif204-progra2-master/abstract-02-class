//
// Created by Maikol Guzman Alan on 2/28/22.
//

#ifndef ABSTRACT_02_CLASS_STUDENT_H
#define ABSTRACT_02_CLASS_STUDENT_H
#include "Person.h"
#include <iostream>
using namespace std;

class Student: public Person {
public:
    Student();

    virtual ~Student();

    virtual string speak() const;
    string study();
};


#endif //ABSTRACT_02_CLASS_STUDENT_H
