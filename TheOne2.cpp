#include "pt4.h"
#include <iostream>
using namespace std;

void Solve()
{
    Task("TheOne2");

	double x, y;

	pt >> x >> y;

	pt << ((y <= x / 2) && (x*x + y * y <= 4));
}
