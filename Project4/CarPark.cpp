#pragma once
#include "CarPark.h"

CarPark::CarPark(){}
CarPark::CarPark(string name){}
CarPark::CarPark(string name, int count, CarPark* list){}
CarPark::~CarPark(){}


string CarPark::getName(){}
void CarPark::setName(string name){}

int CarPark::getCount(){}

Car CarPark::get(int index){}

void CarPark::add(Car car){
	if (list == NULL)
	{
		list = new Car;
		count = 1;
		list[0] = car;
	}
	else {
		Car* temp = new Car[count + 1];
		int i = 0;
		for (; i < count; i++)
		{
			temp[i] = list[i];
			delete[] list;
			list = temp;
			count++;
		}

	}
}

void CarPark::remove(int index) {
	
	if (list != NULL && index >= 0 && index < count) {
		Car* temp = new Car[count - 1];
		
		for (int i = 0, j = 0; i < count; i++) {
			if (i != index) {
				temp[j] = list[i];
				j++;
			}
		}
		delete[] list;
		list = temp;
	}
}

string CarPark::getInfo(){
	if (list == NULL){

	}
}
