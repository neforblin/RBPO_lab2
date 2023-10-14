#include <math.h>
module student2;

double RBPO::Lab2::Variant26::Task3::a(int i)
{
	return pow(-1, i) * (1 - ((static_cast<double>(i) + 1) * (static_cast<double>(i) + 1) / (static_cast<double>(i) + 2) * (static_cast<double>(i) + 2)));
}