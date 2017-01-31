#pragma once
#include "common.h"
#include "Observer.h"

typedef vector<Observer *> Observers;
typedef vector<Observer *>::iterator OIter;

class Subject
{
	Observers observers;

public: 
	void AddObserver(Observer *observer);
	void RemoveObserver(Observer *observer);
	void Notify();
};

