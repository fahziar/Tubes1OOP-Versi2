#ifndef TELLER_B_OOP_H
#define TELLER_B_OOP_H
#include <queue>
/*! \brief
	Kelas ini digunakan untuk merepresentasikan teler. Queue yang digunakan adalah queue STL.
*/
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
	q.push(T);
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
	return q.back();
}

template <typename T>
T TellerB<T>::print()
{
	int nbElement = q.size();
	int i;
	Queue tempQueue(q.size());
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
		tempQueue.pop()
		q.push(temp);
	}
}
#endif