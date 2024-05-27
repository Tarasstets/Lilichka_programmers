#include "Art.h"

Art::Art(string _name, int _price, int _countItems, string _genre) : price(_price), countItems(_countItems), genre(_genre)
{
}

void Art::print(ostream& os) const
{
	os << "name =  " << name << " price = " << price << " CountItems = " << countItems << " genre = " << genre;
}

void Art::read(istream& is)
{
	is >> name >> price >> countItems >> genre;
}

double Art::getAveragePrice() const
{
	return (double)price / countItems;
}

string Art::getGenre() const
{
	return genre;
}

int Art::getPrice() const
{
	return price;
}

int Art::getCount() const
{
	return countItems;
}

void operator+(Art& a1, int number)
{
	a1.countItems += number;
}

bool operator<(const Art& a1, const Art& a2)
{
	return a1.price < a2.price;
}

ostream& operator<<(ostream& os, Art* a)
{
	os << *a;
	return os;
}

ostream& operator<<(ostream& os, const Art& a)
{
	a.print(os);
	return os;
}

istream& operator>>(istream& is, Art& a)
{
	a.read(is);
	return is;
}
