#include "stdafx.h"
#include "Circle.h"
#include "Cylinder.h"
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	/*int n;
	cin >> n;
	Circle* circle = new Circle(n);
	circle->show();
	circle->calc_volume();
	delete circle;
	circle = nullptr;*/
	int a, b;
	cin >> a; cin >> b;
	Cylinder* cyl = new Cylinder(a, b);
	cyl->show();
	cyl->calc_S();
	return 0;
}

