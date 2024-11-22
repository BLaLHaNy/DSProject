#pragma once
#include <iostream>

using namespace std;

#include "LinkedQueue.h"
#include "PriQueue.h"

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
	void assigncar(Patient* P, Car* c);//not done yet
};


class Car
{
private:
	Patient* AssignedPatient;
	string type;
	int speed;
	string status="FreeCar";
public:
	Car(string t, int s);
	string gettype() const;
	void Pickup();//not done yet
	int getspeed(); 
	void setAP(Patient* AP);
	void dropoff();//not done yet
	void setstatus(string s);
	Patient* getAP();
	/*void setspeed(Car*c);*/
};






