#include "stdafx.h"
#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
const double M_PI = 3.14;

using namespace std;

class Figure
{
	int R;
public:
	Figure() {
		int R;
	}
	virtual double CalcArea()=0;
	virtual void Show()=0;
};

class Circle : public Figure {
	int R;
public:
	
	Circle() {
		int R;
	}
	Circle(int size)
	{
		R = size;
	}
	virtual void Show()
	{
		cout << "size: " << R;
	}
	virtual double CalcArea()
	{
		int x = M_PI * R*R;
		cout << x;
		return x;
	}
};

int main()
{
	Circle(4);

    return 0;
}

