#include "Time.h"

Time::Time()
{
	jam = 0;
	menit = 0;
	detik = 0;
}

Time::Time(int jam, int menit, int detik)
{
	this->setJam(jam);
	this->setMenit(menit);
	this->setDetik(detik);
}

Time& Time::operator= (const Time& time)
{
	this->jam = time.jam;
	this->menit = time.menit;
	this->detik = time.detik;
	return *this;
}

int Time::getDetik()
{
	return detik;
}

int Time::getMenit()
{
	return menit;
}

int Time::getJam()
{
	return jam;
}

void Time::setDetik(int detik)
{
	if ((detik >= 0) && (detik < 60))
	{
		this->detik = detik;
	}
}

void Time::setMenit(int menit)
{
	if ((menit >= 0) && (menit < 60))
	{
		this->menit = menit;
	}
}

void Time::setJam(int jam)
{
	if ((jam >= 0) && (jam < 24))
	{
		this->jam = jam;
	}
}

Time::~Time()
{

}