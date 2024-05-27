#include "Audience.h"
#include "Multimedia.h"
#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

int main()
{
	/*Audience<int> a;
	cin >> a;
	a.print(cout);

	Multimedia<int, int> ma;
	cin >> ma;
	ma.print(cout);*/

	ifstream f("Equipments.txt");
	vector<Audience<int>*> audiences;
	while (!f.eof())
	{
		char mark;
		f >> mark;
		switch (mark)
		{
		case 'A':
		{
			Audience<int>* a = new Audience<int>();
			a->read(f);
			audiences.push_back(a);
		}
		break;
		case 'M':
		{
			Audience<int>* a = new Multimedia<int, int>();
			a->read(f);
			audiences.push_back(a);
		}
		break;
		}
	}
	f.close();
	for (int i = 0; i < audiences.size(); i++)
	{
		audiences[i]->print(cout);
		cout << endl;
	}

	cout << endl;
	auto itMax = max_element(audiences.begin(), audiences.end());
	cout << "max audience: " << **itMax;
	cout << endl;
	cout << endl;

	auto itMaxPart = max_element(audiences.begin(), audiences.end(), [](Audience<int>* a1, Audience<int>* a2) { return a1->getTable2() + a1->getTable3() < a2->getTable2() + a2->getTable3(); });
	cout << "max part audience: " << **itMaxPart;
	cout << endl;
	cout << endl;

	int s = 0;
	for_each(audiences.begin(), audiences.end(), [&s](Audience<int>* a) {s += a->getArea(); });
	cout << "total area = " << s << endl;
	cout << endl;

	sort(audiences.begin(), audiences.end(), [](Audience<int>* a1, Audience<int>* a2) { return a1->getTable2()+a1->getTable3() < a2->getTable2()+a2->getTable3();});
	for_each(audiences.begin(), audiences.end(), [](Audience<int>* a) { a->print(cout); cout << endl; });
	Audience<int>* one = new Audience<int>("100", 0, 0 ,0);
	char floor = '1';
	int n = count_if(audiences.begin(), audiences.end(), [floor](Audience<int>* a1) { return a1->getNumber()[0] == floor; });
	cout << "n = " << n << endl;
	

	return 0;
}