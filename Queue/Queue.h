#ifndef QUEUE_OOP_H
#define QUEUE_OOP_H
#include <cstdlib>
#include <vector>
/**
 * @brief Kelas template dari struktur data queue.
 * 
 * @tparam T Tipe data dari elemen queue
 */
template <typename T>
class Queue
{
public:
	/**
	 * @brief Konstruktor. Jumlah elemen maksimal yang bisa ditampung queue diset sesuai defaultSize (50)
	 */
	Queue();

	/**
	 * @brief Kosntruktor. Jumlah elemen maksimal yang bisa ditampung queue sesuai dengan parameter.
	 * 
	 * @param size Jumlah elemen maksium dari queue
	 */
	Queue(int size);

	///Desktruktor
	~Queue();


	/**
	 * @brief Menambah elemen baru di akhir antrian.
	 * 
	 * @param newElement Elemen baru yang akan ditambah
	 */
	void Add(T newElement);

	/**
	 * @brief Menghapus elemen di awal antrian. Prekondisi: queue tidak penuh
	 * @return Elemen yang dihapus
	 */
	T Delete();

	/**
	 * @brief Menghapus elemen di akhir antrian.
	 * @return Elemen yang dihapus
	 */
	T DeleteLast();


	/**
	 * @brief Mengecek apakah queue telah penuh.
	 * @return Mengembalikan true jika queue telah penuh dan sebaliknya
	 */
	bool isFull() const;

	/**
	 * @brief Mendapatkan jumlah elemen saat ini
	 * @return Jumlah elemen yang ada queue.
	 */
	int NbElement() const;

	/**
	 * @brief Mendapatkan jumlah elemen maksimum yang dapat ditampung queue
	 * @return Jumlah elemen maksimum yang dapat ditampung queue.
	 */
	int getSize() const;

private:
	///Array yang digunakan sebagai representasi queue
	std::vector<T> tabel;

	///Ukuran dari tabel
	int size;

	///Jumlah elemen saat ini
	int head, tail;

	///Default size dari queue
	static const int defaultSize = 50;
};

template <typename T>
Queue<T>::Queue()
{
	try {

		this->tabel.resize(Queue::defaultSize + 1);
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
		this->tabel.resize(size + 1);
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