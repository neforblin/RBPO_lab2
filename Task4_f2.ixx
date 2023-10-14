module;
#include <math.h>
export module student3:f2;

namespace RBPO
{
	namespace Lab2
	{
		namespace Variant26
		{
			namespace Task4
			{
				export double f2(double x)
				{
					double f;
					if (x >= -3.5) f = 4 * x * x + 2 * x - 19;
					else
						f = (-2 * x) / (-4 * x + 1);
					return f;
				}
			}
		}
	}
}