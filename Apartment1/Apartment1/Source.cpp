#include <iostream>

#include "Apartment.h"
#include "Apartment2.h"
#include "Collection.h"


using namespace std;

int main()
{
	Apartment<int> ap(2, 25, 50000);
	Apartment2<int, int> ap2(3, 35, 70000, 1);

	cout << ap;
	cout << endl;
	cout << ap2;
	cout << endl;

	MyCollection myCollection;
	myCollection.readFromFile("Text.txt");
	myCollection.printToFile(cout);

	myCollection.printMaxPrice(cout);

	return 0;
}