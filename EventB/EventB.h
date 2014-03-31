#ifndef EVENT_A_OOP_H
#define EVENT_A_OOP_H
#include "TellerB.h"
#include "Event.h"


/*! \brief
	Kelas untuk merepresentasikan event. Untuk teller, digunkan kelas TellerA yang menggunakan queue buatan sendiri
*/
class EventB : public Event
{
private:
	///Teller
	vector<TellerB<int> >T;
public:
	///Konstruktor dari EventA
	EventB(DateTime Tmax, DateTime Tmin, int jumlahTeller);
	///Destruktor dari EventA
	~EventB();

	//Method turunan dari Event
	
	///Memproses kedatangan pelanggan. Inputnya yaitu waktu kedatangan pelanggan.
	virtual void arrive(DateTime t);
	///Memproses pelanggan yang sudah dilayanai. Inputnya yaitu id pelanggan yang pergi
	virtual void depart(int id);
	///Mencetak kondisi antrian teller ke layar
	virtual void print();

	friend int jockeying(int origin);

};
#endif