#ifndef AUDIENCE_H
#define AUDIENCE_H


#include <iostream>
#include <fstream>
#include <string>

using namespace std;

template<class T>
class Audience
{
protected:
	string number;
	T area;
	int table2;
	int table3;
public:
	Audience(string _number = "", T _area = 1, int _table2 = 1, int _table3 = 1);

	string getNumber() const;
	T getArea() const;
	int getTable2();
	int getTable3();

	virtual void print(ostream& os) const;
	virtual void read(istream& is);
	
	friend bool operator<(const Audience<T>& a1, const Audience<T>& a2);
	friend bool operator==(const Audience<T>& a1, const Audience<T>& a2);
	friend bool operator!=(const Audience<T>& a1, const Audience<T>& a2);
	friend bool operator>(const Audience<T>& a1, const Audience<T>& a2);



	friend ostream& operator<<(ostream& os, const Audience<T>& a)
	{
		a.print(os);
		return os;
	}
	friend istream& operator>>(istream& is, Audience<T>& a)
	{
		a.read(is);
		return is;
	}

};

#include "Audience.cpp"

#endif

