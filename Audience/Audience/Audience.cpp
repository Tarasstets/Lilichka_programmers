#ifndef AUDIENCE_CPP
#define AUDIENCE_CPP

#include "Audience.h"

template<class T>
inline Audience<T>::Audience(string _number, T _area, int _table2, int _table3) : number(_number), area(_area), table2(_table2), table3(_table3)
{
}

template<class T>
inline string Audience<T>::getNumber() const
{
	return number;
}

template<class T>
inline T Audience<T>::getArea() const
{
	return area;
}

template<class T>
inline int Audience<T>::getTable2()
{
	return table2;
}

template<class T>
inline int Audience<T>::getTable3()
{
	return table3;
}

template<class T>
inline void Audience<T>::print(ostream& os) const
{
	os << "The audience - " << number << "." << " The area is " << area << "." << " There are - " << table2 << " table2." << " There are - " << table3 << " table3." << " ";
}

template<class T>
inline void Audience<T>::read(istream& is)
{
	is >> number >> area >> table2 >> table3;
}

template<class T>
bool operator==(const Audience<T>& a1, const Audience<T>& a2)
{
	return a1.getArea() == a2.getArea();
}

template<class T>
bool operator<(const Audience<T>& a1, const Audience<T>& a2)
{
	return a1.getArea() < a2.getArea();
}

template<class T>
bool operator!=(const Audience<T>& a1, const Audience<T>& a2)
{
	return a1.getArea() != a2.getArea();
}

template<class T>
bool operator>(const Audience<T>& a1, const Audience<T>& a2)
{
	return a1.getArea() > a2.getArea();
}

#endif