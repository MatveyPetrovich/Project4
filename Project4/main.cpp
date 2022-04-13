#include "Car.h"
#include "CarPark.h"

void change(Car &car) {
	car.model = "X";
}

int main()
{
	Car car;
	
	cout << car.getInfo() << endl;
	change(car);
	cout << car.getInfo() << endl;
}