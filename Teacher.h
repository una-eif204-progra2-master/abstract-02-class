//
// Created by Maikol Guzman Alan on 2/28/22.
//

#ifndef ABSTRACT_02_CLASS_TEACHER_H
#define ABSTRACT_02_CLASS_TEACHER_H
#include "Person.h"
#include <iostream>
using namespace std;

class Teacher : public Person{
public:
    Teacher();

    virtual ~Teacher();

    virtual string speak() const;
};



#endif //ABSTRACT_02_CLASS_TEACHER_H
