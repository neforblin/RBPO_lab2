module;
#include <math.h>
export module student3:f4;
import :a;
namespace RBPO
{
	namespace Lab2
	{
		namespace Variant26
		{
			namespace Task4
			{
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