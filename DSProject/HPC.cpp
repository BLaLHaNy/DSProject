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


void Hospital::assigncar()
{
}
Car::Car(string t, int s) :type(t), speed(s) {}

string Car::gettype() const {
	return type;
}
void Car::Pickup()
{
}
void Car::dropoff()
{
}
void Car::setspeed(Car* c)
{
	if (c->gettype() == "NC") {
		;
	}
	else if (c->gettype() == "SC") {
		SC.enqueue(c);
	}

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
