#ifndef TELLER_OOP_A
#define TELLER_OOP_A
#include <iostream>
#include "Teller.h"
#include "Queue.h"
/*! \brief
	Kelas ini digunakna untuk merepresentasikan Teller. Queue yang digunakan adalah queue buatan sendiri
*/
using namespace std;
template <typename T>
class TellerA : public Teller
{
private:
	Queue <T> q;
public:
	//Fungsi dari queue
	///Menambah elemen baru ke paling belakang antrian
	void addAntrian(T elemen);
	///Menghapus elemen paling depan antrian. Mengembalikan elemen yang dihapus
	T deleteAntrian();
	///Menghapus elemen paling belakang antrian. Mengembalikan elemen yang dihapus.
	T deleteLastAntrian();
	///Untuk mendapatkan state teller.
	virtual int getState();
	///Untuk mengeset state dari teller.
	virtual void setState(int state);
	///Mengeprint isi antrian ke layar
	virtual void print();
	virtual int getPanjangAntrian();
};

template <typename T>
int TellerA<T>::getState()
{
	return state;
}

template <typename T>
void TellerA<T>::setState(int state)
{
	this->state = state;
}

template <typename T>
void TellerA<T>::addAntrian(T elemen)
{
	q.Add(elemen);
}

template <typename T>
T TellerA<T>::deleteAntrian()
{
	return q.Delete();
}

template <typename T>
T TellerA<T>::deleteLastAntrian()
{
	return q.DeleteLast();
}

template <typename T>
void TellerA<T>::print()
{
	int nbElement = q.NbElement();
	int i;
	Queue<T> tempQueue(q.getSize());
	T temp;

	//Tampilkan elemen queue
	cout << "{";
	for (i = 0; i < nbElement; i++)
	{
		temp = q.Delete();
		if (i != 0)
		{
			cout << ",";
		}

		cout << temp;

		tempQueue.Add(temp);
		
	}
	cout << "}";

	//Salin kembali elemen tempQueue ke queue
	for (i = 0; i < nbElement; i++)
	{
		temp = tempQueue.Delete();
		q.Add(temp);
	}
}

template <typename T>
int TellerA<T>::getPanjangAntrian()
{
	return q.NbElement();
}
#endif