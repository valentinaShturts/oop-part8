#include "Point.h"
#include "Array1.h"
#include <iostream>
using namespace std;

int main()
{
	Point a(1, 2);
	Point b(3, 4);
	//a();

	//int rez = a(3);
	//cout << "rez = " << rez << endl;

	//a(b)(); //додавання через ()

	////додавання черз функції
	//(a + b)();
	//(a + 3)();
	//(5 + a)();

	//(b += 10)();
	//b();

	//cout << endl << endl;
	//(a++)();
	//(++a)();

	cout << "a>b: " << (a > b) << endl;
	cout << "a=b: " << (a == b) << endl;
	cout << "a!=b: " << (a != b) << endl;
	(a--)();
	(--a)();
	(b -= 10)();

	Array ar(10);
	for (int i = 0; i < ar.GetSize()+2; i++)
	{
		cout << ar[i] << " ";
	}
}
