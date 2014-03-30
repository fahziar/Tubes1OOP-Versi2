#ifndef EVENT_OOP_H
#define EVENT_OOP_H
#include "DateTime.h"
#include "Teller.h"
/*! \brief
	Kelas abstract untuk merepresentasikan event.
*/
class Event
{
public:
	///Mengeset nilai TMax
	virtual void setTMax(DateTime Tmax);
	///Mengeset nilai TMin
	virtual void setTMin(DateTime Tmin);

	///Menghasilkan nilai TMax
	virtual DateTime getTMax() const;
	///Menghasilkan nilai TMin
	virtual DateTime getTMin() const;

	///Memproses kedatangan pelanggan. Inputnya yaitu waktu kedatangan pelanggan.
	virtual void arrive(DateTime t) = 0;
	///Memproses pelanggan yang sudah dilayanai. Inputnya yaitu id pelanggan yang pergi
	virtual void depart(int id) = 0;

	virtual bool isClosed(DateTime& dt) const;
	///Memproses jockeying. Menghasilkan nomor tujuan antrian jockeying. Jika tidak terjadi jockeying, mengembalikan nilai -1
	friend int Jockeying(int iOrigin);
	
private:
	///Jam tutup bank
	DateTime Tmax;
	///Jam buka bank
	DateTime Tmin;

	///Teller
	Teller *T;

	///ID
	static int id;

	int jumlahTeller;
};
#endif

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