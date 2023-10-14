#include <math.h>
module student2;

double RBPO::Lab2::Variant26::Task3::f4(double epsilon)
{
	double pred = 0;
	double now = a(0);
	double sum = now + pred;
	int i = 1;
	do {
		pred = now;
		now = a(i);
		sum += now;
		i++;
	} while (fabs(now - pred) > epsilon);
	return sum;
}