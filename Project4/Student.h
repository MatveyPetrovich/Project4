#include "header.h"

using namespace std;

class Student {
private:
    string name;
    int age;

public:

    Student() {
        name = "no name";
        age = 15;
    }

    Student(string name, int age) {
        this->name = name;
        this->age = age;
    }

    ~Student() {

    }

    string getName() {
        return name;
    }

    void setName(string name) {
        this->name = name;
    }

    int getAge() {
        return age;
    }

    void setAge(int age) {
        if (age >= 14 && age <= 100) {
            this->age = age;
        }
    }



    string getInfo()
    {
        return name + ": age = " + to_string(age) /*+ "; mark = " + to_string(mark)*/;
    }

};