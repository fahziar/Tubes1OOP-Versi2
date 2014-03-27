#ifndef TELLER_B_OOP_H
#define TELLER_B_OOP_H
#include <iostream>
#include <queue>
#include "Teller.h"
/*! \brief
	Kelas ini digunakan untuk merepresentasikan teler. Queue yang digunakan adalah queue STL.
*/
using namespace std;
template <typename T>
class TellerB : public Teller
{
private:
	std::queue<T> q;
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

};

template <typename T>
int TellerB<T>::getState()
{
	return state;
}

template <typename T>
void TellerB<T>::setState(int state)
{
	this->state = state;
}

template <typename T>
void TellerB<T>::addAntrian(T elemen)
{
	q.push(elemen);
}

template <typename T>
T TellerB<T>::deleteAntrian()
{
	T Head = q.front();
	q.pop();
	return Head;
}

template <typename T>
T TellerB<T>::deleteLastAntrian()
{
	queue<T> tempQueue;
	int i, size;
	size = q.size();
	for(i=0; i<size-1; i++)
	{
		tempQueue.push(q.front());
		q.pop();
	}

	int out;
	out = q.front();
	q = tempQueue;
	return out;
}

template <typename T>
void TellerB<T>::print()
{
	int nbElement = q.size();
	int i;
	std::queue<T> tempQueue;
	T temp;

	//Tampilkan elemen queue
	cout << "{";
	for (i = 0; i < nbElement; i++)
	{
		temp = q.front();
		q.pop();
		if (i != 0)
		{
			cout << ",";
		}

		cout << temp;

		tempQueue.push(temp);

	}
	cout << "}";

	//Salin kembali elemen tempQueue ke queue
	for (i = 0; i < nbElement; i++)
	{
		temp = tempQueue.front();
		tempQueue.pop();
		q.push(temp);
	}
}
#endif