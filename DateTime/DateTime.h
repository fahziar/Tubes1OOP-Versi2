#ifndef DATE_TIME_H
#define DATE_TIME_H
#include "Time.h"
#include "Date.h"
#include <iostream>
using namespace std;
/*! \brief
	Kelas ini digunakan untuk merepresentasikan date dan time
*/
class DateTime
{
public:
	///Konstruktor dari kelas DateTime
	DateTime();
	
	///Setter untuk date
	void setDate(Date);
	///Setter untuk time
	void setTime(Time);

	///Getter untuk mendapatkan objek date
	Date getDate();
	///Setter untuk mendapatkan objek time
	Time getTime();

	/**
	 * @brief Membandingkan dua DateTime apakah date tersebut lebih akhir atau sama.
	 * 
	 * 
	 * @return Mengembalikan true jika dateTime1 >= dateTime2
	 */
	bool operator>=(const DateTime&) const;

	/**
	 * @brief Operator untuk mendapatkan DateTime dari istream
	*/
	friend istream& operator>> (istream&,DateTime&);

	
private:
	///Variabel untuk menampung objek date
	Date date;
	///Variabel untuk menampung objek time
	Time time;
};
#endif 
