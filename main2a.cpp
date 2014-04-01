#include "DateTime.h"
#include "Event.h"
#include "EventB.h"
#include <iostream>

using namespace std;

int main()
{
	DateTime Tmax,Temp;
	string pil;
	int jml_teller,id,tempId;
	cin >> Tmax;
	cin >> jml_teller;
	Event *e = new EventB(Tmax,jml_teller);
	do
	{
		cin >> Temp;
		cin >> pil;
		if (pil == "D")
		{
			cin >> id;
			tempId = e->depart(id);
		}
		else if (pil == "A")
		{
			if (!e->isClosed(Temp));
				e->arrive(Temp);
		}
		e->print();
	} while (!e->isClosed(Temp));
	cout << "Loop Terminate" << endl;

	e->close();
	delete e; 
}
