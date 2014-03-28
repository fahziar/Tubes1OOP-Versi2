#include "Date.h"

using namespace std;

Date::Date()
{
	hari = 0;
	bulan = 0;
	tahun = 0;
}

Date::Date(int hari, int bulan, int tahun)
{
	this->hari = hari;
	this->bulan = bulan;
	this->tahun = tahun;
}

Date::~Date()
{

}

Date& Date::operator= (const Date& date)
{
	this->hari = date.hari;
	this->bulan = date.bulan;
	this->tahun = date.tahun;
	return *this;
}

bool Date::operator>= (const Date& date)
{
	//Cek Tahun
	if (this->tahun < date.tahun)
	{
		return false;
	} else if (this->tahun > date.tahun)
	{
		return true;
	} else {

		//Cek bulan
		if (this->bulan < date.bulan)
		{
			return false;
		} else if (this->bulan > date.bulan)
		{
			return true;
		} else {

			//Cek hair
			if(this->hari < date.hari)
			{
				return false;
			} else {
				return true;
			}
		} 
	}
}

int Date::getHari()
{
	return hari;
}

int Date::getBulan()
{
	return bulan;
}

int Date::getTahun()
{
	return tahun;
}

void Date::setHari(int hari)
{
	this->hari = hari;
}

void Date::setBulan(int bulan)
{
	this->bulan = bulan;
}

void Date::setTahun(int tahun)
{
	this->tahun = tahun;
}