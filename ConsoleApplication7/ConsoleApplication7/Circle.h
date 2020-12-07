#ifndef CIRCLE_H
#define CIRCLE_H

#include <cmath>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <math.h>

# define M_PI           3.14159265358979323846  /* pi */

using namespace std;

class Circle {
public:
	Circle()
	{
		R = new int;
	}
	Circle(int N )
	{
		R = new int;
		*R = N;
	}
	virtual ~Circle()
	{
		delete R;
	}
	virtual void show()
	{
		cout << "R : " << *R << endl;
	}
	virtual int calc_volume()
	{
		float x = 2 * M_PI*(*R);
		cout <<"S = "<< x << endl;
		return x;
	}
private:
	int* R;
};

#endif