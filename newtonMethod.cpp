/*TASK*/
/*To find solution of equation f(x) = (x - g * k)^2 + sin(x - g * k) = 0
(where g and k any numbers, start - begin of segment, end - end of segment, eps - precision) using newton method*/
/*Знайти розв'язок рівняння f(x) = (x - g * k)^2 + sin(x - g * k) = 0
(де g і k будь-які цифри, start - початок відрізка, end - кінець відрізка, eps - точність) використовуючи метод ньютона*/
#include <iostream>

using namespace std;

float func(float x, int g, int k) {
	return pow((x - g * k), 2.0) + sin(x - g * k);
}

float df1(float x, int g, int k) {
	return 2 * x - 126 + cos(x - g * k);		//UKR перша похідна **** ENG first derivative
}

float df2(float x, int g, int k) {
	return 2 - sin(x - g * k);					//UKR друга похідна **** ENG second derivative
}

void newton(float start, float end, int g, int k, float eps) {
	cout << endl << "Newton method" << endl;
	float x0 = 0;
	float x1 = 0;
	if (func(start, g, k) * df2(start, g, k) > 0) {
		x0 = start;
	}
	else if (func(end, g, k) * df2(end, g, k) > 0) {
		x0 = end;
	}
	do {
		x1 = x0;
		x0 = x1 - (func(x1, g, k) / df1(x1, g, k));
	} while (fabs(x0 - x1) > eps);
	cout << "x=" << x0 << endl << endl;
}

int main()
{
	int g = 9;
	int k = 7;
	float start;
	float end;
	float eps = 0.01;
	cout << "Start =";
	cin >> start;
	cout << "End =";
	cin >> end;
	newton(start, end, g, k, eps);
}