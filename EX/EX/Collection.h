#pragma once
#include "Art.h"

class Collection: public Art
{
private:
	string author;
	string uniqName;
	double priceItem;
public:
	Collection(string _name = "Picture", int _price = 500, int _countItems = 5, string _genre = "arar ", string _author = "oleg", string _uniqName= "Book", double _priceItem = 5151);

	double getAllPrice() const;
	void setPriceItem(double _priceItem);
	virtual void print(ostream& os) const override;
	virtual void read(istream& is) override;
};

