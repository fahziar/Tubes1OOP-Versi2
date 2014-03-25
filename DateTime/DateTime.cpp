#include "DateTime.h"

DateTime::DateTime()
{

}
void DateTime::setDate(Date date)
{
	this->date = date;
}

void DateTime::setTime(Time time)
{
	this->time = time;
}

Date DateTime::getDate()
{
	return this->date;
}

Time DateTime::getTime()
{
	return this->time;
}