#ifndef MULTIMEDIA_CPP
#define MULTIMEDIA_CPP

#include "Multimedia.h"

template<class T, class G>
inline Multimedia<T, G>::Multimedia(string _number, int _area, int _table2, int _table3): Audience<G>(_number, _area, _table2, _table3)
{
	/*this->equipments = vector<string>(_equipments);*/
}

template<class T, class G>
void Multimedia<T, G>::add(string equipment)
{
	equipments.push_back(equipment);
}

template<class T, class G>
inline void Multimedia<T, G>::print(ostream& os) const
{
	/*Audience<G>::print(os);*/
	os << "The audience - " << this->number << "." << " The area is " << this->area << "." << " There are - " << this->table2 << " table2." << " There are - " << this->table3 << " table3. ";
	cout << "There are: ";
	for (int i = 0; i < equipments.size(); i++)
	{
		cout << equipments[i] << " ";
	}
	cout << " equipments.";
}
template<class T, class G>
void Multimedia<T, G>::read(istream& is)
{
	/*Audience<G>::read(is);*/
	is >> this->number >> this->area >> this->table2 >> this->table3;
	int countDevice = 0;
	is >> countDevice;
	for (int i = 0; i < countDevice; i++)
	{
		string equipment;
		is >> equipment;
		this->equipments.push_back(equipment);
		
	}
}
#endif
