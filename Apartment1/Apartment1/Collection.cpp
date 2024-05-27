#include "Collection.h"

MyCollection::MyCollection() : apartments(vector<Apartment<int>*>())
{
}

void MyCollection::printMaxPrice(ostream& os) const
{
	/*int max = 0;
	int numberMax = -1;
	for (int i = 0; i < apartments.size(); i++)
	{
		if (apartments[i]->getPrice() > max)
		{
			max = apartments[i]->getPrice();
			numberMax = i;
		}
	}
	os << "The most expensive apartment: " << endl;
	os << *apartments[numberMax] << endl;*/

	auto it = max_element(apartments.begin(), apartments.end(), [](Apartment<int>* ap1, Apartment<int>* ap2) {return ap1->getPrice() < ap2->getPrice(); });
	os << "The most expensive apartment: " << **it;
}



void MyCollection::readFromFile(string filename)
{
	ifstream f("Text.txt");
	while (!f.eof())
	{
		int mark;
		f >> mark;
		switch (mark)
		{
		case 1:
		{
			Apartment<int>* aPtr = new Apartment<int>();
			f >> *aPtr;
			this->apartments.push_back(aPtr);
			break;
		}
		case 2:
		{
			Apartment<int>* aPtr = new Apartment2<int, int>();
			f >> *aPtr;
			this->apartments.push_back(aPtr);
			break;
		}

		}
	}
	f.close();
}

void MyCollection::printToFile(ostream& os) const
{
	for (int i = 0; i < apartments.size(); i++)
	{
		cout << *apartments[i] << endl;
	}
}
