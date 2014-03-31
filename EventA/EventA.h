#ifndef EVENT_A_OOP_H
#define EVENT_A_OOP_H
#include "../Event.h"
#include "../TellerA/TellerA.h"

/*! \brief
	Kelas untuk merepresentasikan event. Untuk teller, digunkan kelas TellerA yang menggunakan queue buatan sendiri
*/
class EventA : public Event
{
private:
	TellerA *TA;
public:
	///Konstruktor dari 
	EventA();
	~EventA();
	void SetTeller(int);
	void arrive(DateTime);
	void depart(int);
};
#endif