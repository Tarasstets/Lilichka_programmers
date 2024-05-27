#include <iostream>
#include <fstream>
#include <algorithm>
#include <exception>
#include <vector>
#include "Progresia.h"
#include "Spadna.h"


using namespace std;

int main()
{
	vector<Progresia<double>> v3;
	Progresia<double> p1(2, 2);
	Progresia<double> p2(3, -0.5);
	Progresia<double> p3(4, -1);
	v3.push_back(p1);
	v3.push_back(p2);
	v3.push_back(p3);


	/*for (int i = 0; i < v3.size(); i++)
	{
		cout << v3[i] << "\n";
	}
	cout << endl;*/
	ostream_iterator<Progresia<double>> osIt3(cout, "\n");
	copy(v3.begin(), v3.end(), osIt3);


	int amountZnakosmin = count_if(v3.begin(), v3.end(), [](const Progresia<double>& p) {return p.isSnakoSmin(); });
	cout << "Count of Znakosmin progresia:  " << amountZnakosmin << endl;
	
	vector<Progresia<double>> vz;
	for_each(v3.begin(), v3.end(), [&vz](const Progresia<double>& p)
		{
			if (p.isSnakoSmin())
			{
				vz.push_back(p);
			};
		});
	cout << "sort by S5: " << endl;
	sort(vz.begin(), vz.end(), [](const Progresia<double>& p1, const Progresia<double>& p2) {return p1.sum(5) < p2.sum(5); });
	copy(vz.begin(), vz.end(), osIt3);

	auto itMin = min_element(v3.begin(), v3.end(), [](const Progresia<double>& p1, const Progresia<double>& p2) { return p1.getB() < p2.getB(); });
	Progresia<double> pMin = *itMin;
	Progresia<double> pMin3 = pMin ^ 3;
	cout << "pidnesena do 3 naimensha progresia: " << pMin3 << endl;


	return 0;
}