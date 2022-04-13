#include "CarPark.h"

class Manager
{
public:
	void sortByBrandAsc(CarPark CarPark);
	void sortByBrandDesc(CarPark CarPark);
	void sortByModelAsc(CarPark CarPark);
	void sortByModelDesc(CarPark CarPark);
	void sortByAgeAsc(CarPark CarPark);
	void sortByAgeDesc(CarPark CarPark);

	double calculateAvgAge(CarPark carPark);

	bool checkStudent(CarPark carPark, Car car);

	int countOfCarWithModelGreateThan(CarPark carPark, int model);
	int countOfCarWithModelLessThan(CarPark carPark, int model);

};
