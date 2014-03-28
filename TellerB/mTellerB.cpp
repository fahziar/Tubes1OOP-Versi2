#include "TellerB.h"
#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
	TellerB<int> teller;

	int input;
	int x;
	bool quit = false;

	do
	{
		cin >> input;
		switch (input)
		{
			case 1:
				cout << teller.getState() << endl;
				break;
			case 2:
				cin >> x;
				teller.setState(x);
				break;
			case 3:
				cin >> x;
				teller.addAntrian(x);
				break;
			case 4:
				cout << teller.deleteAntrian() << endl;
				break;
			case 5:
				cout << teller.deleteLastAntrian() << endl;
				break;
			case 6:
				teller.print();
				cout << endl;
				break;
			case 7:
				quit = true;
				break;
			case 8:
				cout << teller.getPanjangAntrian() << endl;
			default:
				break;
		}
	} while (!quit);
	return 0;
}