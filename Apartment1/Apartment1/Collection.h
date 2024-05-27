#pragma once
#include "Apartment.h"
#include "Apartment2.h"
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>
using namespace std;
class MyCollection
{
private:
	vector<Apartment<int>*> apartments;
public:
	MyCollection();


	void printMaxPrice(ostream& os) const;

	void readFromFile(string filename);
	void printToFile(ostream& os) const;
};

