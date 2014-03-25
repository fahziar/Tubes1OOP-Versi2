#include "DateTime.h"
#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
	DateTime dt;
	int x, y, z;

	int input;
	bool quit = false;

	do
	{
		cin >> input;

		switch (input)
		{
			case 1:
				cout << dt.getTime().getDetik() << endl;
				cout << dt.getTime().getMenit() << endl;
				cout << dt.getTime().getJam() << endl;

				cout << dt.getDate().getHari() << endl;
				cout << dt.getDate().getBulan() << endl;
				cout << dt.getDate().getTahun() << endl;

				break;

			case 2:
				cin >> x;
				cin >> y;
				cin >> z;

				//Time t(x, y, z);
				dt.setTime(Time(x, y, z));

				cin >> x;
				cin >> y;
				cin >> z;

				//Date d(x, y, z);
				dt.setDate(Date(x, y, z));

				break;
			case 3:
				quit = true;
				break;
			default:
				break;
		}
	} while (!quit);
	return 0;
}