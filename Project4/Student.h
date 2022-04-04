#include "header.h"

using namespace std;

class Student {
private:
    string name;
    int age;

public:

    Student();

    Student(string name, int age);

    ~Student();

    string getName();

    void setName(string name);

    int getAge();

    void setAge(int age);

    string getInfo();

};