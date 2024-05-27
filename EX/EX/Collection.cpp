#include "Collection.h"

Collection::Collection(string _name, int _price, int _countItems, string _genre, string _author, string _uniqName, double _priceItem): 
	Art(_name , _price, _countItems, _genre), author(_author), uniqName(_uniqName), priceItem(_priceItem)
{
}

double Collection::getAllPrice() const
{
	return price + priceItem;
}

void Collection::setPriceItem(double _priceItem)
{
	priceItem = _priceItem;
}

void Collection::print(ostream& os) const
{
	os << "name =  " << name << " price = " << price << " CountItems = " << countItems << " genre = " << genre;
	os << " Author = " << author << " UniqName = " << uniqName << " PriceItem = " << priceItem;
}

void Collection::read(istream& is)
{
	Art::read(is);
	is >> author >> uniqName >> priceItem;
}
