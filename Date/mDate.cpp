#include "Date.h"
#include <iostream>

using namespace std;
int main()
{
	Date date1;
	int x, y, z;
	cin >> x;
	cin >> y;
	cin >> z;

	Date date2(x, y, z);

	int input;
	bool quit = false;

	do
	{
		cin >> input;
		switch (input)
		{
			case 1:
				cout << date1.getHari() << endl;
				cout << date1.getBulan() << endl;
				cout << date1.getTahun() << endl;
				break;
			case 2:
				cin >> x;
				cin >> y;
				cin >> z;
				date1.setHari(x);
				date1.setBulan(y);
				date1.setTahun(z);
				break;
			case 3:
				date1 = date2;
				break;
			case 4:
				quit = true;
				break;
			case 5:
				cout << (date1 >= date2) << endl;
				break;
			case 6:
				cout << (date1 == date2) << endl;
			default:
				break;
		}
	} while (!quit);

	return 0;
}