#pragma once
#include <list>
#include <iostream>
#include <fstream>
#include "Art.h"
#include "Collection.h"
#include <algorithm>
#include <deque>
#include <set>

int main()
{
	deque<Art*> a;
	ifstream f("Text1.txt");
	while (!f.eof())
	{
		char choice;
		f >> choice;
		Art* art = nullptr;
		switch(choice)
		{
			case 'A' :
			{
			Art* art = new Art();
			f >> *art;
			a.push_back(art);
			break;
			}
			case 'C' :
			{
				Art* art = new Collection();
				f >> *art;
				a.push_back(art);
			}
			break;
		}
		/*cout << "y = " << *art << endl;*/
		/*a.push_back(art);*/
	}

	f.close();

	

	/*copy(a.begin(), a.end(), ostream_iterator<Art*>(cout, " \n"));*/

	for (auto it = a.begin(); it != a.end(); it++)
	{
		cout << **it << endl;
	}



	set<string> genres;
	for (auto it = a.begin(); it != a.end(); it++)
	{
		genres.insert((**it).getGenre());
	}

	for (auto it1 = genres.begin(); it1 != genres.end(); it1++)
	{
		cout << *it1 << endl;
	}

	auto minIt = min_element(a.begin(), a.end(), [](Art* art1, Art* art2) { return art1->getPrice() < art2->getPrice(); });
	cout << *minIt << endl;


	int countAll = 0;
	for_each(a.begin(), a.end(), [&countAll](Art* art) {countAll += art->getCount(); });
	cout << "Count all = " << countAll << endl;


	list<Art*> arts;
	ifstream f1("Arts.txt");
	while (!f1.eof())
	{
		Art* art = new Art();
		f1 >> *art;
		arts.push_back(art);
	}
	f1.close();
	copy(arts.begin(), arts.end(), ostream_iterator<Art*>(cout, " \n"));

	list<Art*> arts1;
	ifstream f2("Collections.txt");
	while (!f2.eof())
	{
		Art* art = new Collection();
		f2 >> *art;
		cout << "x = " << *art << endl;
		arts1.push_back(art);
	}
	f2.close();
	copy(arts1.begin(), arts1.end(), ostream_iterator<Art*>(cout, " \n"));
	cout << "merge colletions " << endl;


	list<Art*> all;
	merge(arts.begin(), arts.end(), arts1.begin(), arts1.end(), back_inserter(all));
	copy(all.begin(), all.end(), ostream_iterator<Art*>(cout, " \n"));
}
//Окремо надрукуйте імена власників унікальних колекцій(перевірка типу за допомогою dynamic_cast). Знайдіть три найвартісніші колекції(partial_sort) (з найбільшою середньою вартістю одного предмету).
//  Збільшіть кількість предметів у кожній колекції на задане число(for_each), надрукуйте отриманий контейнер.