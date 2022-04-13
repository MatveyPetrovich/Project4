#pragma once
#include "header.h"
#include "Car.h"

class CarPark
{
	friend class Maneger;

private:
	static int count;

	string name;
	int count;
	Car* list;

public:
	static const int MAX_YEAR = 10;
	static const int MIN_YEAR = 0;

	CarPark();
	CarPark(string name);
	CarPark(string name, int count, CarPark* list);
	~CarPark();

	
	string getName();
	void setName(string name);

	int getCount();

	Car get(int index);

	void add(Car car);

	string getInfo();

	void remove(int index);



};

