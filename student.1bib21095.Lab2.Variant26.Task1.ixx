module;
#include <math.h>
export module student;

namespace RBPO
{
	namespace Lab2
	{
		namespace Variant26
		{
			namespace Task1
			{
				export double f1(double x)
				{
					double f;
					f = 1/sqrt(x+2);
					return f;
				}
				export double f2(double x)
				{
					double f;
					x >= -3.5 ? f = 4*x*x + 2*x - 19 : f = (-2*x)/(-4*x+1);
					return f;
				}
				export double a(int i)
				{
					return pow(-1, i) * (1 -((static_cast<double>(i) + 1) * (static_cast<double>(i) + 1) / (static_cast<double>(i) +2 )* (static_cast<double>(i) + 2)));
				}
				export double f3(int n)
				{
					double sum = 0;
					for (int i = 0; i <= n; i++)
					{
						sum += a(i);
					}
					return sum;
				}
				export double f4(double epsilon)
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
			}
		}
	}
}