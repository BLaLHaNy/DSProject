#pragma once
#include <iostream>

using namespace std;

#include "LinkedQueue.h"
#include "PriQueue.h"
#include "HPC.h"

class Organizer
{
private:
	LinkedQueue<Patient>* AllPatients;
	LinkedQueue<Patient>* Cancellationlist;
	PriQueueReturn<Car>* OutCar;
	priQueue<Car>* BackCar;
	

};

