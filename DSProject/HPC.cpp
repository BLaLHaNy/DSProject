#include "HPC.h"
Hospital::Hospital(int hid) {
	//SC = sc;
	//NC = nc;
	HID = hid;
}

void Hospital::setPatients(Patient* p)
{
	if (p->gettype() == "NP") {
		NP.enqueue(p);
	}
	else if (p->gettype() == "SP") {
		SP.enqueue(p);
	}
	else if (p->gettype() == "EP") {
		EP.enqueue(p,p->getsev());
	}
}

void Hospital::setCars(Car* c)
{
	if (c->gettype() == "NC") {
		NC.enqueue(c);
	}
	else if (c->gettype() == "SC") {
		SC.enqueue(c);
	}

}

void Hospital::assigncar(Patient* P,Car* C)
{
	C->setAP(P);
}



Car::Car(string t, int s) :type(t), speed(s) {}

string Car::gettype() const {
	return type;
}
void Car::Pickup()
{
	setstatus("BusyCar");

}
int Car::getspeed()
{
	return speed;
}
void Car::setAP(Patient* AP)
{
	AssignedPatient = AP;
}
void Car::dropoff()
{
	setstatus("FreeCar");
}

void Car::setstatus(string s)
{
	status = s;
}

Patient* Car::getAP()
{
	return AssignedPatient;
}

Patient::Patient(int id, string t, int hid, int sev = 1) :ID(id), ptType(t), HID(hid), severity(sev) {}
int Patient::getsev() const
{
	return severity;
}

string Patient::gettype() const
{
	return ptType;
}
