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

bool Time::operator>=(const Time T) const
{
	//Cek jam
	if (this->jam < T.jam)
	{
		return false;
	} else if (this->jam > T.jam)
	{
		return true;
	} else {

		//Cek menit
		if (this->menit < T.menit)
		{
			return false;
		} else if (this->menit > T.menit)
		{
			return true;
		} else {

			//Cek detik
			if(this->detik < T.detik)
			{
				return false;
			} else {
				return true;
			}
		} 
	}
}

bool Time::operator==(const Time& t) const
{
	return ((this->detik == t.detik) && (this->menit == t.menit) && (this->jam == t.jam));
}

Time::~Time()
{

}