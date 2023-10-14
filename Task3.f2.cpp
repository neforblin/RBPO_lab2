#include <math.h>
import student2;
double RBPO::Lab2::Variant26::Task3::f2(double x)
{
	double f;
	if (x >= -3.5) f = 4 * x * x + 2 * x - 19;
	else
		f = (-2 * x) / (-4 * x + 1);
	return f;
}