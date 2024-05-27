#ifndef APARTMENT2_H
#define APARTMENT2_H
#include "Apartment.h"
template<class T, class G>
class Apartment2 :public Apartment<G>
{
private:
	int countRooms2;
public:
	Apartment2(int _countRooms = 1, T _area = T(), int _price = 10000, int _countRooms2 = 1);


	void print(ostream& os) const;

};



#include "Apartment2.cpp"

#endif