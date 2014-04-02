#ifndef EVENT_A_OOP_H
#define EVENT_A_OOP_H
#include "TellerA.h"
#include "../Event.h"


/**
 * @brief Kelas yang digunakan untuk merepresentasikan event. Kelas ini menggunakan TellerA dengan Queue yang dibuat sendiri.
 * 
 * @param Tmax Waktu kedatangan maksimum
 * @param Tmin Waktu kedatangan minimum
 * @param jumlahTeller Jumlah teller yang beroperasi.
 */
class EventA : public Event
{
private:
	///Teller
	vector<TellerA<int> >T;
public:
	/**
	 * @brief Konstruktor dari EventA
	 * 
	 * @param Tmax Waktu maksimum pelanggan dilayani
	 * @param jumlahTeller Jumlah teller yang ada.
	 */
	EventA(DateTime Tmax,int jumlahTeller);
	///Destruktor dari EventA
	~EventA();

	//Method turunan dari Event
	
	/**
	 * @brief Memproses kedatangan pelanggan.
	 * 
	 * @param t Waktu kedatangan pelanggan
	 */
	virtual void arrive(DateTime t);

	/**
	 * @brief Memproses pelanggan yang sudah dilayanai.
	 * 
	 * @param id Id pelanggan yang pergi
	 */
	virtual int depart(int id);

	/**
	 * @brief Memindahkan antrian terakhir pada teller origin ke teller tujuan. Prekondisi: Teller tidak kosong
	 * 
	 * @param origin Teller asal
	 * @param tujuan Teller tujuan
	 */
	virtual void pindah(int origin,int tujuan);

	/**
	 * @brief Mencetak kondisi antrian teller ke layar.
	 * @details Format: "Q[i] = {1,2,..}". Tidak akan mencetak antrian yang kosong
	 */
	virtual void print();

	/**
	 * @brief Memproses tutupnya teller.
	 * @details Method ini akan mengosongkan semua antrian di teller sambil menampilkan elemen teller yang keluar di layar.
	 * Format tampilannya: 
	 * Depart 1
	 * Depart 2
	 * ...
	 */
	virtual void close();

	/**
	 * @brief Memproses terjadinya jockeying.
	 * 
	 * @param origin Id teller tempat terjadinya jockeying
	 * @return Id teller yang dituju saat jockeying, jika tidak terjadi jockeying mengembalikan -1
	 */
 	virtual int jockeying(int origin);

};
#endif