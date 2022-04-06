#include "header.h"

using namespace std;

class Car {
private:
    string brand;
    string model;
    int age;

public:

    Car();

    Car(string brand, string model, int age);

    ~Car();

    string getBrand();

    void setBrand(string brand);

    int getAge();

    void setAge(int age);

    string getModel();

    void  setModel(string model);

    string getInfo();

};