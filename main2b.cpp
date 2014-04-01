#include "DateTime.h"
#include "Event.h"
#include "EventB.h"
#include <iostream>

using namespace std;

int main()
{
	DateTime Tmax,Temp;
	string pil;
	int *TblJokey;
	int jml_teller,id,tempId;
	cin >> Tmax;
	cin >> jml_teller;
	Event *e = new EventB(Tmax,jml_teller);
	TblJokey = new int[jml_teller];
	do
	{
		cin >> Temp;
		cin >> pil;
		if (pil == "D")
		{
			cin >> id;
			for (int i = 0;i<jml_teller;i++)
			{
				TblJokey[i] = e->jockeying(i);
			}
			tempId = e->depart(id);
			if (TblJokey[tempId] != -1)
			{
				e->pindah(tempId,TblJokey[tempId]);
				cout << "Terjadi jockeying" << endl;
			}
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
	delete TblJokey;
	delete e; 
}
