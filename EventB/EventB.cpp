#include "EventB.h"

using namespace std;
EventB::EventB(DateTime Tmax, int jumlahTeller)
{
	T.resize(jumlahTeller);
	this->jumlahTeller = jumlahTeller;

	this->Tmax = Tmax;

}

EventB::~EventB()
{

}


void EventB::arrive(DateTime t)
{
	int i;
	int Tmin = 0;
	int min = T[0].getPanjangAntrian();

	for(i=1; i<jumlahTeller; i++)
	{
		if (T[i].getPanjangAntrian() < min)
		{
			Tmin = i;
			min = T[i].getPanjangAntrian();
		}
	}

	Event::id++;
	T[Tmin].addAntrian(Event::id);
}

int EventB::depart(int id)
{
	bool found = false;
	int i = 0;
	int tempId;

	while ((!found) && (i <=jumlahTeller))
	{
		tempId = T[i].deleteAntrian();
		if (tempId != id)
		{
			//Kembalikan kondisi antrian
			int j, temp;;
			int panjangAntrian = T[i].getPanjangAntrian();
			T[i].addAntrian(tempId);
			for (j=0; j<panjangAntrian-1; j++)
			{
				temp = T[i].deleteAntrian();
				T[i].addAntrian(temp);
			}

			//increment i
			i++;
		} else {
			found = true;
		}
	}
	return i;
}

void EventB::pindah(int origin,int tujuan)
{
	int temp = T[origin].deleteLastAntrian();
	T[tujuan].addAntrian(temp);
}

void EventB::print()
{
	int i ;

	for (i=0; i<jumlahTeller; i++)
	{
		if (T[i].getPanjangAntrian() != 0)
		{
			cout << "Q[" << i << "] = ";
			T[i].print();
			cout << endl;
		}
	}
	
}

void EventB::close()
{
	bool isAllEmpty = false;
	int i;

	while (!isAllEmpty)
	{
		isAllEmpty = true;

		for(i=0; i<jumlahTeller; i++)
		{
			if (T[i].getPanjangAntrian() > 0)
			{
				isAllEmpty = false;
				cout << "Departure " << T[i].deleteAntrian() << endl;
			}
		}
	}
}

int EventB::jockeying(int origin)
{
	int i = 0;
	int tujuan = -1;
	while ((i<jumlahTeller)&&(tujuan == -1))
	{
		if (i != origin)
		{
			if ((T[origin].getPanjangAntrian() - T[i].getPanjangAntrian()) > 2)
			{
				tujuan = i;
			}
		}
		i++;
	}
	return tujuan;
}