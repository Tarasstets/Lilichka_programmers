#ifndef APARTMENT_CPP
#define APARTMENT_CPP
#include "Apartment.h"

template<class T>
Apartment<T>::Apartment(int _countRooms, T _area, int _price) : countRooms(_countRooms), area(_area), price(_price)
{
}
template<class T>
int Apartment<T>::getCountRooms() const
{
	return countRooms;
}

template<class T>
void Apartment<T>::setCountRooms(int _countRooms)
{
	this->countRooms = _countRooms;
}

template<class T>
T Apartment<T>::getArea() const
{
	return area;
}

template<class T>
void Apartment<T>::setArea(T _area)
{
	this->area = _area;
}

template<class T>
int Apartment<T>::getPrice() const
{
	return price;
}

template<class T>
void Apartment<T>::setPrice(int _price)
{
	this->price = _price;
}

template<class T>
double Apartment<T>::priceForMetr() const
{
	return price / area;
}

template<class T>
void Apartment<T>::print(ostream& os) const
{
	os << "There are " << countRooms << " rooms." << " The place is " << area << "." << " The price is " << price << ". ";
}

template<class T>
void Apartment<T>::read(istream& is)
{
	is >> countRooms >> area >> price;
}

template<class T>
bool operator<(const Apartment<T>& a1, const Apartment<T>& a2)
{
	return a1.getArea() < a2.getArea();
}

template<class T>
bool operator==(const Apartment<T>& a1, const Apartment<T>& a2)
{
	return a1.getArea() == a2.getArea();
}

template<class T>
bool operator!=(const Apartment<T>& a1, const Apartment<T>& a2)
{
	return a1.getArea() != a2.getArea();
}

template<class T>
bool operator>(const Apartment<T>& a1, const Apartment<T>& a2)
{
	return a1.getArea() > a2.getArea();
}

//template<class T>
//ostream& operator<<(ostream& os, const Apartment<T>& a)
//{
//	/*os << "There are" << a.countRooms << " rooms." << " The place is " << a.area << "." << " The price is " << a.price << "." << endl;*/
//	a.print(os);
//	return os;
//}

//template<class T>
//istream& operator>>(istream& is, Apartment<T>& a)
//{
//	a.read(is);
//	return is;
//}

#endif