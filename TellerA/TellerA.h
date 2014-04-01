#ifndef TELLER_OOP_A
#define TELLER_OOP_A
#include <iostream>
#include "Teller.h"
#include "Queue.h"
using namespace std;

/**
 * @brief Kelas ini digunakna untuk merepresentasikan Teller. Queue yang digunakan adalah queue buatan sendiri
 * 
 */

template <typename T>
class TellerA : public Teller
{
private:
	///Queue yang akan digunakan sebagai antrian di depan teller
	Queue <T> q;
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