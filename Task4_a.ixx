module;
#include <math.h>
export module student3:a;

namespace RBPO
{
	namespace Lab2
	{
		namespace Variant26
		{
			namespace Task4
			{
				double a(int i)
				{
					return pow(-1, i) * (1 - ((static_cast<double>(i) + 1) * (static_cast<double>(i) + 1) / (static_cast<double>(i) + 2) * (static_cast<double>(i) + 2)));
				}
			}
		}
	}
}