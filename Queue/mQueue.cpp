#include "Queue.h"
#include <iostream>

using namespace std;
int main()
{
	int input;
	int x;
	bool quit = false;

	cin >> x;
	Queue <int> queue(x);

	do
	{
		cin >> input;

		switch (input)
		{
			case 1:
				cin >> x;	
				queue.Add(x);
				break;
			case 2:
				cout << queue.Delete() << endl;
				break;
			case 3:
				cout << queue.DeleteLast() << endl;
				break;
			case 4:
				cout << queue.isFull() << endl;
				break;
			case 5:
				cout << queue.NbElement() << endl;
				break;
			case 6:
				cout << queue.getSize() << endl;
				break;
			case 7:
				quit = true;
				break;
			default:
				break;
		}
	} while (!quit);

	return 0;

}