#include "DateTime.h"
#include <string>
#include <sstream>
#include <iostream>

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

bool DateTime::operator>=(const DateTime& dt) const
{
	if (this->date >= dt.date)
	{
		if (this->date == dt.date)
		{
			return this->time >= dt.time;
		} else {
			return true;
		}
	} else {
		return false;
	}
}

istream& operator>> (istream& input,DateTime& dt)
{
	string s_input;
	stringstream ss_input;
	input >> s_input;
	s_input.replace(10,1," ");
	ss_input << s_input;
	ss_input >> dt.date >> dt.time;
	return input;
}