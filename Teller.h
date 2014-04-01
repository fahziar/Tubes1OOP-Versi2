#ifndef TELLER_OOP_H
#define TELLER_OOP_H

/**
 * @brief Abstract class untuk teller.
 */
class Teller
{
protected:
	///State dari teller
	int state;
public:
	/**
	 * @brief Mendapatkan state teller.
	 * @return State dari teller
	 */
	virtual int getState() = 0;

	/**
	 * @brief Mengeset state teller.
	 * 
	 * @param state State baru untuk teller.
	 */
	virtual void setState(int state) = 0;

	/**
	 * @brief Menampilkan isi antria ke layar
	 * @details Format tampilan: {1,2,...}
	 */
	virtual void print() = 0;

	/**
	 * @brief Mendapatkan panjang antrian
	 * @return Panjang antrian
	 */
	virtual int getPanjangAntrian() = 0;
};
#endif