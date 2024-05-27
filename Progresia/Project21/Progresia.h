#ifndef PROGRESIA_H
#define PROGRESIA_H
#include <iostream>

using namespace std;
template<class T>
class Progresia
{
protected:
	T b;
	T q;
public:
	Progresia();
	Progresia(T _b, T _q);
	Progresia(const Progresia& p);

	virtual void print(ostream& os) const;
	virtual void read(istream& is);

	T getB() const;
	T getQ() const;

	T memberN(int n) const;
	T sum(int n) const;
	bool isSnakoSmin() const;

	Progresia<T> operator*(T scalar) const;
	Progresia<T> operator/(T scalar) const;
	Progresia<T> operator^(int n) const;
	Progresia<T>& operator=(const Progresia<T>& p);



	friend ostream& operator<<(ostream& os, const Progresia<T>& p) 
	{
		p.print(os);
		return os;
	}
	friend istream& operator>>(istream& is, Progresia<T>& p);

	

};


#include "Progresia.cpp"

#endif

