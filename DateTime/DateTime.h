#ifndef DATE_TIME_H
#define DATE_TIME_H
#include "Time.h"
#include "Date.h"
/*! \brief
	Kelas ini digunakan untuk merepresentasikan date dan time
*/
class DateTime
{
public:
	///Konstruktor dari kelas DateTime
	DateTime();
	
	///Untuk mengeset Date
	void setDate(Date);
	//Untuk mengeset Time
	void setTime(Time);

	///Getter untuk mendapatkan objek date
	Date getDate();
	///Setter untuk mendapatkan objek time
	Time getTime();

	
private:
	///Variabel untuk menampung objek date
	Date date;
	///Variabel untuk menampung objek time
	Time time;
};
#endif 
