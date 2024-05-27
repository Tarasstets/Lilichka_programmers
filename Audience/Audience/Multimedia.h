#ifndef MULTIMEDIA_H
#define MULTIMEDIA_H

#include <iostream>
#include <vector>
#include "Audience.h"

using namespace std;

template<class T, class G>
class Multimedia:public Audience<G>
{
private:
	vector<string> equipments;
public:
	Multimedia(string _number = "", int _area = 1, int _table2 = 1, int _table3 = 1);

	void add(string equipment);
	void print(ostream& os) const;
	void read(istream& is);
};


#include "Multimedia.cpp"

#endif
