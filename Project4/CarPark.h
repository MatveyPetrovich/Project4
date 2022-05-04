#pragma once
#include "header.h"
#include "Car.h"

class CarPark
{
	friend class Manager;

private:
	static int count;

	string name;
	int size;
	Car* list;

public:
	static const int MAX_YEAR = 10;
	static const int MIN_YEAR = 0;

	CarPark();
	CarPark(string name);
	CarPark(string name, int size, Car* list);
	~CarPark();

	
	string getName();
	void setName(string name);

	int getSize();

	static int getCount();

	Car get(int index);

	void add(Car car);

	string getInfo();

	void remove(int index);



};

