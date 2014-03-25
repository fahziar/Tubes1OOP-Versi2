#ifndef QUEUE_OOP_H
#define QUEUE_OOP_H
#include <cstdlib>
/*! \brief
	Kelas untuk merepresentasikan antrian dengan menggunakan array.
*/
template <typename T>
class Queue
{
public:
	///Konstruktor. Ukuruan dari antrian dibuat sesuai dengan default size.
	Queue();
	///Konstruktor. Parameter akan menjadi ukuran dari queue
	Queue(int size);
	//Desktruktor
	~Queue();

	///Menambah elemen baru di akhir antrian.
	void Add(T newElement);
	///Menghapus elemen di awal antrian. Fungsi ini mengembalika elemen yang dihapus.
	T Delete();
	///Menghapus elemen di akhir antrian. Fungsi ini mengembalika elemen yang dihapus.
	T DeleteLast();

	///Mengecek apakah queue telah penuh.
	bool isFull() const;
	///Mengembalikan jumlah pada queue saat ini
	int NbElement() const;
	///Mengembalikan batas maksimal queue saat ini
	int getSize() const;

private:
	///Array yang digunakan sebgaia representasi queue
	T *tabel;
	///Ukuran dari tabel
	int size;
	///Jumlah elemen saat ini
	int head, tail;
	static const int defaultSize = 50;
};

template <typename T>
Queue<T>::Queue()
{
	try {

		this->tabel = new T[Queue::defaultSize + 1];
		this->size = Queue::defaultSize;
		this->head = 1;
		this->tail = 2;
	
	} catch (...)	
	{
		this->size = 0;
	}
}


template <typename T>
Queue<T>::Queue(int size)
{
	try
	{
		this->tabel = new T[size + 1];
		this->size = size;
		this->head = 1;
		this->tail = 2;
	} catch (...)
	{
		this->size = 0;
	}
}

template <typename T>
Queue<T>::~Queue()
{
	delete[] tabel;
}

template <typename T>
bool Queue<T>::isFull() const
{
	return tail==head;
}

template <typename T>
int Queue<T>::NbElement() const
{
	if (this->head + 1 == this->tail)
	{
		return 0;
	}
	else if (this->head >= this->tail) {
		return ((this->size - this->head) + this->tail);
	}
	else if (this->head < this->tail) {
		return (this->tail - this->head - 1);
	}
}

template <typename T>
void Queue<T>::Add(T newElement)
{
	this->tabel[this->tail] = newElement;
	this->tail++;
	if (this->tail == this->size + 2)
	{
		this->tail = 1;
	}
}

template <typename T>
T Queue<T>::Delete()
{
	this->head++;
	if (this->head == this->size + 2)
	{
		this->head = 1;

	}

	return this->tabel[this->head];
}

template <typename T>
T Queue<T>::DeleteLast()
{
	this->tail--;
	if (this->tail < 1)
	{
		this->tail = this->size + 1;
	}

	return this->tabel[tail];
}

template <typename T>
int Queue<T>::getSize() const
{
	return size;
}
#endif