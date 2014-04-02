#include "Event.h"

int Event::id = 0;

void Event::setTMax(DateTime Tmax)
{
	this->Tmax = Tmax;
}

DateTime Event::getTMax() const
{
	return Tmax;
}

bool Event::isClosed(DateTime &dt) const
{
	return dt >= Tmax;
}