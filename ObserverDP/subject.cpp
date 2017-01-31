#include "subject.h"

void Subject::AddObserver(Observer *observer)
{
	observers.push_back(observer);
}

void Subject::RemoveObserver(Observer *observer)
{
	OIter seek = find(observers.begin(), observers.end(), observer);

	if (seek != observers.end())
	{
		observers.erase(seek);
	}
}

void Subject::Notify()
{
	OIter seek = observers.begin();
	OIter end = observers.end();

	for (; seek != end; ++seek)
	{
		(*seek)->Update();
	}
}