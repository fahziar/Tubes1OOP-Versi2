#ifndef TELLER_B_OOP_H
#define TELLER_B_OOP_H
#include <iostream>
#include <queue>
#include "../Teller.h"
using namespace std;

/**
 * @brief Kelas ini digunakna untuk merepresentasikan Teller. Queue yang digunakan adalah queue buatan sendiri
 * 
 */
template <typename T>
class TellerB : public Teller
{
private:
	///Queue yang akan digunakan sebagai antrian di depan teller
	queue<T> q;
public:
	//Fungsi dari queue
	/**
	 * @brief Menambah elemen baru ke paling belakang antrian
	 * 
	 * @param elemen Elemen yang akan ditambahkan
	 */
	void addAntrian(T elemen);
	
	/**
	 * @brief ///Menghapus elemen paling depan antrian.
	 * @return Elemen yang dihapus
	 */
	T deleteAntrian();

	/**
	 * @brief Menghapus elemen paling belakang antrian.
	 * @return Elemen yang dihapus
	 */
	T deleteLastAntrian();

	/**
	 * @brief Mendapatkan state teller.
	 * @return State dari teller
	 */
	virtual int getState();

	/**
	 * @brief Mengeset state teller.
	 * 
	 * @param state State baru untuk teller.
	 */
	virtual void setState(int state);

	/**
	 * @brief Menampilkan isi antria ke layar
	 * @details Format tampilan: {1,2,...}
	 */
	virtual void print();

	/**
	 * @brief Mendapatkan panjang antrian
	 * @return Panjang antrian
	 */
	virtual int getPanjangAntrian();

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

template <typename T>
int TellerB<T>::getPanjangAntrian()
{
	return q.size();
}
#endif