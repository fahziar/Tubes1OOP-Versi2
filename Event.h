#ifndef EVENT_OOP_H
#define EVENT_OOP_H
#include "DateTime.h"
#include "Teller.h"
#include <vector>

using namespace std;
/**
 * @brief Kelas abstrak untuk Event
 * 
*/
class Event
{
public:
	/**
	 * @brief Mengeset nilai TMax
	 * 
	 * @param Tmax Nilai Tmax yang baru
	 */
	virtual void setTMax(DateTime Tmax);


	/**
	 * @brief Getter untuk TMax
	 * @return Nilai Tmax
	 */
	virtual DateTime getTMax() const;

	/**
	 * @brief Memproses kedatangan pelanggan. Prekondisi: isClosed(t) = false
	 * 
	 * @param t Waktu kedatangan pelanggan.
	 */
	virtual void arrive(DateTime t) = 0;

	/**
	 * @brief Memproses pelanggan yang sudah dilayanai. Inputnya yaitu id pelanggan yang pergi
	 * 
	 * @param id id dari pelanggan yang sudah dilayani
	 */
	virtual int depart(int id) = 0;

	virtual void pindah(int origin,int tujuan) = 0;

	/**
	 * @brief Fungsi untuk menunjukkan apakah teller sudah tutup atau belum.
	 * @details Syara teller tutup: dt >= Tmax
	 * 
	 * @param dt Waktu yang akan dicek
	 * 
	 * @return Menghasilkan true jika toko sudah tutup dan sebaliknya.
	 */
	virtual bool isClosed(DateTime& dt) const;

	/**
	 * @brief Mencetak kondisi antrian teller ke layar.
	 * @details Format: "Q[i] = {1,2,..}". Tidak akan mencetak antrian yang kosong
	 */
	virtual void print() = 0;

	virtual void close() = 0;

	/**
	 * @brief Memproses terjadinya jockeying.
	 * 
	 * @param e Event tempat terjadinya jockeying
	 * @param origin Id teller tempat terjadinya jockeying
	 * @return Id teller yang dituju saat jockeying, jika tidak terjadi jockeying mengembalikan -1
	 */
 	virtual int jockeying(int origin) = 0;

	
	
protected:
	///Jam tutup bank
	DateTime Tmax;

	///ID terbesar saat ini
	static int id;

	///Jumlah teller saat ini.
	int jumlahTeller;
};
#endif