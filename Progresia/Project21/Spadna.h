#pragma once
#include "Progresia.h"

class Spadna: public Progresia<double>
{
public:
	Spadna(double b= 1, double q = 0.5);
	
	double sumaNesk() const;
};

