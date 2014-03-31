#ifndef EVENT_OOP_H
#define EVENT_OOP_H
#include "DateTime.h"
#include "Teller.h"
#include <vector>
/*! \brief
	Kelas abstract untuk merepresentasikan event.
*/
using namespace std;
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

	///Memproses kedatangan pelanggan. Inputnya yaitu waktu kedatangan pelanggan. Prekondisi: isClosed(t) = false
	virtual void arrive(DateTime t) = 0;
	///Memproses pelanggan yang sudah dilayanai. Inputnya yaitu id pelanggan yang pergi
	virtual void depart(int id) = 0;

	virtual bool isClosed(DateTime& dt) const;
	///Memproses jockeying. Menghasilkan nomor tujuan antrian jockeying. Jika tidak terjadi jockeying, mengembalikan nilai -1

	///Mencetak kondisi antrian teller ke layar
	virtual void print() = 0;

	friend int Jockeying(int iOrigin);
	
protected:
	///Jam tutup bank
	DateTime Tmax;
	///Jam buka bank
	DateTime Tmin;

	///ID
	static int id;

	int jumlahTeller;
};
#endif