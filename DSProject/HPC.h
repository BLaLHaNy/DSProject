#pragma once
#include <iostream>

using namespace std;

#include "LinkedQueue.h"
#include "priQueue.h"

class Patient
{
	string ptName;
};

class Hospital
{
private:
	QueueCancel<Patient>* NP;
	LinkedQueue<Patient>* SP;
	priQueue<Patient>* EP;
	LinkedQueue<Car>* SC;
	LinkedQueue<Car>* NC;
};

class Car
{
private:
	Patient* AssignedPatient;

public:

};


