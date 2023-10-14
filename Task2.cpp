#include <math.h>

import student1;
double RBPO::Lab2::Variant26::Task2::f1(double x)
{
	double f;
	f = 1 / sqrt(x + 2);
	return f;
}
double RBPO::Lab2::Variant26::Task2::f2(double x)
{
	double f;
	if (x >= -3.5) f = 4 * x * x + 2 * x - 19;
	else
		f = (-2 * x) / (-4 * x + 1);
	return f;
}
double a(int i)
{
	return pow(-1, i) * (1 - ((static_cast<double>(i) + 1) * (static_cast<double>(i) + 1) / (static_cast<double>(i) + 2) * (static_cast<double>(i) + 2)));
}
double RBPO::Lab2::Variant26::Task2::f3(int n)
{
	double sum = 0;
	int i = 0;
	while (i <= n)
	{
		sum += a(i);
		i++;
	}return sum;

}
double RBPO::Lab2::Variant26::Task2::f4(double epsilon)
{
	double pred = a(0);
	double now = a(1);
	double sum = pred + now;
	int i = 2;
	while (fabs(now - pred) > epsilon)
	{
		pred = now;
		now = a(i);
		sum += now;
		i++;
	}return sum;
}