#include <iostream>
#include "EventB.h"

int main()
{
	
	DateTime Tmin, Tmax, temp;
	Tmin.setTime(Time(9, 0, 0));
	Tmax.setTime(Time(18, 0, 0));

	Tmin.setDate(Date(10, 10, 2013));
	Tmax.setDate(Date(10, 10, 2013));
	Event * e = new EventB(Tmin, Tmax, 3);

	int x, y, z;
	bool quit = false;
	int input;
	do
	{
		cin >> input;

		switch (input)
		{
			case 1:
				quit = true;
				break;
			case 2:
				cin >> x;
				cin >> y;
				cin >> z;

				temp.setDate(Date(10,10,2013));
				temp.setTime(Time(x,y,z));
				e->arrive(temp);
				break;
			case 3:
				cin >> x;
				e->depart(x);
				break;
			case 4:
				e->print();
				break;
			default:
				break;
		}
	} while(!quit);

	return 0;
}