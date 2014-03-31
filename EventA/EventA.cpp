#include "EventA.h"

EventA::EventA()
{

}
EventA::~EventA()
{

}
void EventA::SetTeller(int n)
{
	this->jumlahTeller = n;
	TA = new TellerA[n];
	for (int i=0;i<n;i++)
	{
		TA[i] = new TellerA<int>();
	}
}
void EventA::arrive(DateTime dt)
{
	if ((dt >= Tmin)&& (Tmax >= dt))
	{
		id++;
		TA[id%jumlahTeller].addAntrian(id);
	}
}
void EventA::depart(int id)
{

}