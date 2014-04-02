#ifndef TIME_OOP_H
#define TIME_OOP_H
#include <iostream>
using namespace std;
/**
 * @brief Kelas untuk merepresentasikan waktu dalam jam, menit dan detik.
 */
class Time
{
public:
	/**
	 * @brief Konstruktor untuk waktu. Jam menit dan detik diset menjadi 0
	 */
	Time();

	/**
	 * @brief Konstruktor waktu dengan paramater detik, menit, dan jam.
	 * 
	 * @param jam Nilai jam yang digunakan.
	 * @param menit Nilai menit yang digunakan.
	 * @param detik Nilai detik yang digunakan.
	 */
	Time(int jam, int menit, int detik);

	/**
	 * @brief Operator assignment untuk waktu.
	 * 
	 */
	Time& operator=(const Time&);

	///Destruktor untuk waktu.
	~Time();

	/**
	 * @brief Getter jam
	 * @return Mengembalikan nilai jam.
	 */
	int getJam();

	/**
	 * @brief Getter menit.
	 * @return Mengembalikan nilai menit.
	 */
	int getMenit();

	/**
	 * @brief Getter detik
	 * @return Mengembalikan nilai detik.
	 */
	int getDetik();
	
	/**
	 * @brief Setter untuk jam. Jam harus bernilai 0 <= jam < 24. Jika diluar range tersebut, akan diabaikan
	 * 
	 * @param jam Nilai jam yang baru
	 */
	void setJam(int jam);

	/**
	 * @brief Setter untuk menit. Menit harus bernilai 0 <= Menit < 59. Jika diluar range tersebut, akan diabaikan
	 * 
	 * @param menit Nilai menit yang baru.
	 */
	void setMenit(int menit);

	/**
	 * @brief [brief description]
	 * @details [long description]
	 * 
	 * @param detik [description]
	 */
	void setDetik(int detik);

	/**
	 * @brief Operator >=. Mengecek apakah sebuah time lebih akhir atau sama dengan time pembanding.
	 * 
	 * @param T Time yang akan dibandingkan
	 * 
	 * @return Mengembalikan true jika a >= b dan sebaliknya.
	 */
	bool operator>=(const Time T) const;

	/**
	 * @brief Operator ==. Mengecek apakah dua buah time menunjukkan waktu yang sama.
	 
	 * @param T  Time yang akan dibandingkan.
	 * 
	 * @return Mengembalikan true jika kedua time tersebut menunjukkan waktu yang sama dan sebalikya.
	 */
	bool operator==(const Time& T) const;

	/**
	 * @brief Operator untuk mendapatkan time dari istream
	*/
	friend istream& operator>> (istream&,Time&);

private:
	///Variabel yang berisi jam.
	int jam;
	///Variabel yang berisi menit.
	int menit;
	///Variabel yang berisi detik.
	int detik;
};

#endif