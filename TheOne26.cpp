#include "pt4.h"
#include <iostream>
#include <math.h>
using namespace std;

void Solve()
{
    Task("TheOne26");

	int D, M, Y;

	pt >> D >> M >> Y;

	switch (M)
	{
	case 2: if (D == 1)
		(M = M - 1) && (D = 30);
		break;
	case 4: if (D == 1)
		     (M = M - 1) && (D = 30);
		break;
	case 5: if (D == 1)
		(M = M - 1) && (D = 31);
		break;
	case 6: if (D == 1)
		(M = M - 1) && (D = 30);
	case 7: if (D == 1)
		(M = M - 1) && (D = 31);
		break;
	case 8: if (D == 1)
		(M = M - 1) && (D = 30);
		break;
	case 9: if (D == 1)
		(M = M - 1) && (D = 30);
		break;
	case 10: if (D == 1)
		(M = M - 1) && (D = 31);
		break;
	case 11: if (D == 1)
		(M = M - 1) && (D = 31);
	case 12: if (D == 1)
		(M = M - 1) && (D = 31);
		break;
	case 3: if (((Y % 4 == 0) && (Y % 100 != 0) || (Y % 400 == 0)) && (D == 1))
	{
		D = 29;
		M = M - 1;
		pt << D << M << Y;
	}
			else D = 28;
		pt << D - 1 << M << Y;
		break;
	}
	
	if ((D == 1) && (M = 1))
	{
		Y = Y - 1;
		M = 12;
		D = 31;
		pt << D << M << Y;
	}
	else
		pt << D - 1 << M << Y;


	





}
