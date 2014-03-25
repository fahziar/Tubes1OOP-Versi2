#ifndef DATE_OOP_H
#define DATE_OOP_H
/*! \brief
	Kelas yang digunakan untuk merepresentasikan tanggal dalam bentuk hari, bulan dan tahun.
*/
class Date
{
private:
	int hari;
	int bulan;
	int tahun;
public:
	
	///Konstruktor date tanpa parameter.
	Date();
	///Konstruktor date dengan parameter.
	Date(int, int, int);
	///Destruktor date.
	~Date();

	///Operator Asignment date.
	Date& operator= (const Date&);

	///Getter untuk hari.
	int getHari();
	///Getter untuk bulan.
	int getBulan();
	///Getter untuk tahun.
	int getTahun();

	///Setter untuk hari.
	void setHari(int);
	///Setter untuk bulan.
	void setBulan(int);
	///Setter untuk tahun.
	void setTahun(int);

};

#endif