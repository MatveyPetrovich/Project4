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
			temp[1] = list[i];
			delete[] list;
		}

	}
}

string CarPark::getInfo(){

}
