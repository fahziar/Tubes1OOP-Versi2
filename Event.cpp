#include "Event.h"

int Event::id = 0;

void Event::setTMax(DateTime Tmax)
{
	this->Tmax = Tmax;
}

void Event::setTMin(DateTime Tmin)
{
	this->Tmin = Tmin;
}

DateTime Event::getTMax() const
{
	return Tmax;
}

DateTime Event::getTMin() const
{
	return Tmin;
}

bool Event::isClosed(DateTime &dt) const
{
	return dt >= Tmax;
}