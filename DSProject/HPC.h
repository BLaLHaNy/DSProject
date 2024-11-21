#pragma once
#include <iostream>

using namespace std;

#include "LinkedQueue.h"
#include "PriQueue.h"

class Patient
{
	string ptName;
};

class Car
{
private:
	Patient* AssignedPatient;

public:

};

class Hospital
{
private:
	QueueCancel<Patient*> NP;
	LinkedQueue<Patient*> SP;
	priQueue<Patient*> EP;
	LinkedQueue<Car*> SC;
	LinkedQueue<Car*> NC;
};




