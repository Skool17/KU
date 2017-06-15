#include <iostream>
#include <stdlib.h>
#include <clocale>
#include <math.h>
using namespace std;

func_diskr()
{
	int a,b,c;
	double x1,x2,x,D;
	cout << "Please enter сoefficients" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	D = b*b-4*a*c;
	if (D>0)
	{
		x1 = (-b+sqrt(D))/2*a;
		x2 = (-b-sqrt(D))/2*a;	
		cout << x1 << endl;
		cout << x2 << endl;
	}	
	if (D==0)
	{ 
		x = (-b/2*a);
		cout << x << endl;
	}
	if (D<0)
	{
		cout << "No solutions" << endl;
	}
}
