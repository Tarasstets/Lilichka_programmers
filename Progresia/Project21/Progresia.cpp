#ifndef PROGRESIA_CPP
#define PROGRESIA_CPP
#include "Progresia.h"
template<class T>
Progresia<T>::Progresia(): b(0), q(0)
{
}
template<class T>
Progresia<T>::Progresia(T _b, T _q) : b(_b), q(_q)
{
}
template<class T>
Progresia<T>::Progresia(const Progresia& p)
{
	this->b = p.b;
	this->q = p.q;
}
template<class T>
void Progresia<T>::print(ostream& os) const
{
	os << "b = " << b << " q = " << q;
}
template<class T>
void Progresia<T>::read(istream& is)
{
	is >> b >> q;
}
template<class T>
T Progresia<T>::getB() const
{
	return b;
}
template<class T>
T Progresia<T>::getQ() const
{
	return b;
}
template<class T>
T Progresia<T>::memberN(int n) const
{
	return b*pow(q,n-1);
}
template<class T>
T Progresia<T>::sum(int n) const
{
	return b*(pow(q,n)-1)/(q-1);
}
template<class T>
bool Progresia<T>::isSnakoSmin() const
{
	return q<0;
}
template<class T>
Progresia<T> Progresia<T>::operator*(T scalar) const
{
	Progresia<T> result(this->b * scalar, this->q);
	return result;
}
template<class T>
Progresia<T> Progresia<T>::operator/(T scalar) const
{
	Progresia<T> result(this->b / scalar, this->q);
	return result;
}
template<class T>
Progresia<T> Progresia<T>::operator^(int n) const
{
	Progresia<T> result(pow(this->b, n), pow(this->q,n));
	return result;
}
template<class T>
Progresia<T>& Progresia<T>::operator=(const Progresia<T>& p)
{
	if (this != &p)
	{
		this->b = p.b;
		this->q = p.q;
	}
	return *this;
}
//template<class T>
//ostream& operator<<(ostream& os, const Progresia<T>& p)
//{
//	p.print(os);
//	return os;
//}
template<class T>
istream& operator>>(istream& is, Progresia<T>& p)
{
	p.read(is);
	return is;
}


#endif