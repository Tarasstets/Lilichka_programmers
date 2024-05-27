#include "Spadna.h"
#include <exception>

Spadna::Spadna(double b, double q): Progresia<double>(b,q)
{
	if (fabs(q)>1)
	{
		throw exception("Ne spadna progresia");
	}
}

double Spadna::sumaNesk() const
{
	return b/(1-q);
}
