#include "Time.h"
#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
	Time t1;
	int input;
	int x, y, z;

	cin >> x;
	cin >> y;
	cin >> z;

	Time t2(x, y, z);

	bool quit = false;
	do
	{
		cin >> input;

		switch (input)
		{
			case 1:
				cout << t1.getJam() << endl;
				cout << t1.getMenit() << endl;
				cout << t1.getDetik() << endl;
				break;
			case 2:
				cin >> x;
				cin >> y;
				cin >> z;
				t1.setJam(x);
				t1.setMenit(y);
				t1.setDetik(z);
				break;
			case 3:
				t1 = t2;
				break;
			case 4:
				quit = true;
				break;
			default:
				break;
		}
	} while (!quit);
	
	return 0;
}