#ifndef TELLER_OOP_H
#define TELLER_OOP_H

/*! \brief
	Abstract kelas untuk teller.
*/
class Teller
{
protected:
	int state;
public:
	///Untuk mendapatkan state teller.
	virtual int getState() = 0;
	///Untuk mengeset state dari teller.
	virtual void setState(int state) = 0;
	///Mengeprint isi antrian ke layar
	virtual void print() = 0;
};
#endif