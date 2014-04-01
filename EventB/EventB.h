#ifndef EVENT_A_OOP_H
#define EVENT_A_OOP_H
#include "TellerB.h"
#include "Event.h"


/**
 * @brief Kelas yang digunakan untuk merepresentasikan event. Kelas ini menggunakan TellerB dengan Queue dari STL.
 * 
 * @param Tmax Waktu kedatangan maksimum
 * @param Tmin Waktu kedatangan minimum
 * @param jumlahTeller Jumlah teller yang beroperasi.
 */
class EventB : public Event
{
private:
	///Teller
	vector<TellerB<int> >T;
public:
	/**
	 * @brief Konstruktor dari EventA
	 * 
	 * @param Tmax Waktu maksimum pelanggan dilayani
	 * @param Tmin Waktu minimum pelanggan dilayani
	 * @param jumlahTeller Jumlah teller yang ada.
	 */
	EventB(DateTime Tmax, DateTime Tmin, int jumlahTeller);
	///Destruktor dari EventB
	~EventB();

	//Method turunan dari Event
	
	/**
	 * @brief Memproses kedatangan pelanggan.
	 * 
	 * @param t Waktu kedatangan pelanggan
	 */ I
	virtual void arrive(DateTime t);

	/**
	 * @brief Memproses pelanggan yang sudah dilayanai.
	 * 
	 * @param id Id pelanggan yang pergi
	 */
	virtual void depart(int id);

	/**
	 * @brief Mencetak kondisi antrian teller ke layar.
	 * @details Format: "Q[i] = {1,2,..}". Tidak akan mencetak antrian yang kosong
	 */
	virtual void print();

	/**
	 * @brief Memproses terjadinya jockeying.
	 * 
	 * @param e Event tempat terjadinya jockeying
	 * @param origin Id teller tempat terjadinya jockeying
	 * @return Id teller yang dituju saat jockeying, jika tidak terjadi jockeying mengembalikan -1
	 */
	friend int jockeying(Event e, int origin);

};
#endif