#include "header.h"
#include "Car.h"

class CarPark
{
private:
	string name;
	int count;
	Car* list;

public:
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

};

