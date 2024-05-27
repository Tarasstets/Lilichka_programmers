#ifndef APARTMENT2_CPP
#define APARTMENT2_CPP
#include "Apartment2.h"

template<class T, class G>
Apartment2<T, G>::Apartment2(int _countRooms, T _area, int _price, int _countRooms2) : Apartment<T>(_countRooms, _area, _price), countRooms2(_countRooms2)
{
}


template<class T, class G>
void Apartment2<T, G>::print(ostream& os) const
{
	Apartment<T>::print(os);
	os << " CountRooms2 is " << countRooms2;
}

#endif