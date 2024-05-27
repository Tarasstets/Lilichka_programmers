#ifndef APARTMENT_H
#define APARTMENT_H

#include <iostream>
#include <fstream>

using namespace std;

template<class T>
class Apartment
{
protected:
	int countRooms;
	T area;
	int price;
public:
	Apartment(int _countRooms = 1, T _area = T(), int _price = 10000);

	int getCountRooms() const;
	void setCountRooms(int _countRooms);
	T getArea() const;
	void setArea(T _area);
	int getPrice() const;
	void setPrice(int _price);

	virtual void print(ostream& os) const;
	virtual void read(istream& is);
	double priceForMetr() const;
	friend bool operator<(const Apartment<T>& a1, const Apartment<T>& a2);
	friend bool operator==(const Apartment<T>& a1, const Apartment<T>& a2);
	friend bool operator!=(const Apartment<T>& a1, const Apartment<T>& a2);
	friend bool operator>(const Apartment<T>& a1, const Apartment<T>& a2);

	friend ostream& operator<<(ostream& os, const Apartment<T>& a)
	{
		a.print(os);
		return os;
	};
	friend istream& operator>>(istream& is, Apartment<T>& a)
	{
		a.read(is);
		return is;
	};
};
#include "Apartment.cpp"

#endif