#include "Student.h"

Student::Student() {
    name = "no name";
    age = 15;
}

Student::Student(string name, int age) {
    this->name = name;
    this->age = age;
}

Student::~Student() {

}

string Student::getName() {
    return name;
}

void Student::setName(string name) {
    this->name = name;
}

int Student::getAge() {
    return age;
}

void Student::setAge(int age) {
    if (age >= 14 && age <= 100) {
        this->age = age;
    }
}


string Student::getInfo()
{
    return name + ": age = " + to_string(age) /*+ "; mark = " + to_string(mark)*/;
}