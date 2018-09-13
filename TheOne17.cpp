#include "pt4.h"
#include <iostream>
#include <math.h>
using namespace std;

void Solve()
{
    Task("TheOne17");

	int k, l, m, n;
	bool t;

	pt >> k >> l >> m >> n;

	t = ((k, l, m, n <= 8) && (abs(k - m) == 2) || (abs(k - m) == 1) && (abs(l - n) == 2) || (abs(l - n) == 1));

	pt << t;

	

}
