#ifndef TIME_OOP_H
#define TIME_OOP_H
#include <iostream>
using namespace std;
/*! \brief
	Kelas untuk merepresentasikan waktu dalam jam, menit dan detik.
*/
class Time
{
public:
	///Konstruktor untuk waktu.
	Time();
	///Konstruktor waktu dengan paramater detik, menit, dan jam.
	Time(int jam, int menit, int detik);

	///Operator assignment untuk waktu.
	Time& operator=(const Time&);

	///Destruktor untuk waktu.
	~Time();

	///Getter untuk jam.
	int getJam();
	///Getter untuk menit.
	int getMenit();
	///Getter untuk detik
	int getDetik();
	
	///Setter untuk jam. Jam harus bernilai 0 <= jam < 24. Jika diluar range tersebut, akan diabaikan
	void setJam(int jam);
	///Setter untuk menit. Menit harus bernilai 0 <= Menit < 59. Jika diluar range tersebut, akan diabaikan
	void setMenit(int menit);
	///Setter untuk detik. Detik harus bernilai 0 <= Detik < 59. Jika diluar range tersebut, akan diabaikan
	void setDetik(int detik);

	bool operator>=(const Time T) const;

	bool operator==(const Time&) const;
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