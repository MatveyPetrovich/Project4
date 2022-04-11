#include "Car.h"

Car::Car() {
    brand = "no brand";
    age = 2;
}

Car::Car(string brand, string model, int age)
{
    this->brand = brand;
    this->model = model;
    this->age = age;
}

Car::~Car() {

}

string Car::getBrand() {
    return brand;
}

void Car::setBrand(string brand) {
    this->brand = brand;
}

string Car::getModel() {
    return model;
}

void Car::setModel(string model) {
    this->model = model;
}

int Car::getAge() {
    return age;
}

void Car::setAge(int age) {
    if (age >= 2 && age <= 100) {
        this->age = age;
    }
}

string Car::getInfo()
{
    return brand + ": age = " + to_string(age) /*+ "; mark = " + to_string(mark)*/;
}
