module;
#include <math.h>
export module student4;
namespace RBPO
{
	namespace Lab2
	{
		namespace Variant26
		{
			namespace Task5
			{
				export double f1(double x);
				export double f2(double x);
				export double a(int i);
				export double f3(int n);
				export double f4(double epsilon);
			}
		}
	}
}
module :private;
double RBPO::Lab2::Variant26::Task5::f1(double x)
{
	double f;
	f = 1 / sqrt(x + 2);
	return f;
}
double RBPO::Lab2::Variant26::Task5::f2(double x)
{
	double f;
	if (x >= -3.5) f = 4 * x * x + 2 * x - 19;
	else
		f = (-2 * x) / (-4 * x + 1);
	return f;
}
double RBPO::Lab2::Variant26::Task5::a(int i)
{
	return pow(-1, i) * (1 - ((static_cast<double>(i) + 1) * (static_cast<double>(i) + 1) / (static_cast<double>(i) + 2) * (static_cast<double>(i) + 2)));
}
double RBPO::Lab2::Variant26::Task5::f3(int n)
{
	double sum = 0;
	for (int i = 0; i <= n; i++)
	{
		sum += a(i);
	}
	return sum;
}
double RBPO::Lab2::Variant26::Task5::f4(double epsilon)
{
	double pred = a(0);
	double now;
	double sum = pred;
	for (int i = 1; ; i++)
	{
		now = a(i);
		sum += now;
		if (fabs(now - pred) <= epsilon)
		{
			return sum;
		}
		pred = now;
	}
}