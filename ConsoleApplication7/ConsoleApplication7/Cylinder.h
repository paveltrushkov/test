#ifndef CYLINDER_H
#define CYLINDER_H

#include "Circle.h"
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <math.h>

# define M_PI           3.14159265358979323846  /* pi */

using namespace std;

class Cylinder : public Circle
{
public:
	Cylinder()
		:Circle()
	{
		H = new int;
	}
	Cylinder(int N, int m_H)
		:Circle(N)
	{
		R = new int;
		*R = N;
		H = new int;
		*H = m_H;
	}
	virtual void show()
	{
		cout << "R : " << *R << endl;
		cout << "H : " << *H << endl;
	}
	int calc_S()
	{
		float d = calc_volume()*(*H);
		cout << "Ss = " << d << endl;
		return Circle::calc_volume()*(*H);
	}


private:
	int* R;
	int* H;
};

















#endif