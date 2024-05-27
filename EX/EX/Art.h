#pragma once
#include <iostream>
#include <fstream>

using namespace std;

class Art
{
protected:
	int price;
	int countItems;
	string genre;
	string name;
public:
	Art(string _name = "Picture", int _price = 500, int _countItems = 5, string _genre = "arar ");

	virtual void print(ostream& os) const;
	virtual void read(istream& is);

	double getAveragePrice() const;
	string getGenre() const;
	int getPrice() const;
	int getCount() const;

	friend void operator+(Art& a1, int number);
	friend bool operator<(const Art& a1, const Art& a2);
	friend ostream& operator<<(ostream& os, Art* a);

	friend ostream& operator<<(ostream& os, const Art& a);
	friend istream& operator>>(istream& is, Art& a);

};

