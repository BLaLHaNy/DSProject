#pragma once
#include <iostream>

using namespace std;

#include "LinkedQueue.h"
#include "priQueue.h"

class Patient
{
private:
	int ID;
	string ptType;
	int HID;
	int severity;
public:
	Patient(int id, string t, int hid, int sev = 1);
	int getsev() const;
	string gettype() const;


};

class Hospital
{
private:
	int HID;
	int distance;
	LinkedQueue<Patient*> WaitingP;
	QueueCancel<Patient*> NP;
	LinkedQueue<Patient*> SP;
	priQueue<Patient*> EP;
	LinkedQueue<Car*> SC;
	LinkedQueue<Car*> NC;
public:
	Hospital(int hid);
	void setPatients(Patient* p);
	void setCars(Car* p);
	void assigncar();
};

class Car
{
private:
	Patient* AssignedPatient;
	string type;
	int speed;
	string status="RC";
public:
	Car(string t, int s);
	string gettype() const;
	void Pickup();
	int getspeed(); //set status char// set AP
	void dropoff();
	void setspeed(Car*c);
	//getAP patient
};


