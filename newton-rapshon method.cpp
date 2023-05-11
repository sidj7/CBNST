#include<bits/stdc++.h>
#define e 0.001
using namespace std;

double f(double x)
{
	return 2*x*x*x+3*x-8;
}

double df(double x)
{
	return 6*x*x + 3;
}
void nr(double x)
{
	double h = f(x) / df(x);
	while (abs(h) >= e)
	{
		h = f(x)/df(x);
		x = x - h;
	}

	cout << "The value of the root is : " << x;
}
int main()
{
	double x = -20;
	nr(x);
	return 0;
}
