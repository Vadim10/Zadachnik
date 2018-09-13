#include "pt4.h"
#include <iostream>
using namespace std;

void Solve()
{
    Task("TheOne24");

	bool x, y;
	int noo;

	pt >> noo;
	pt >> x >> y;

	switch (noo)
	{
	case 1: pt << (x && y); break;
	case 2: pt << (x || y); break;
	case 3: pt << (x && !y || !x && y); break;
	case 4: pt << (!x || y); break;
	case 5: pt << (!x && !y ||x && y); break;
	}
}
