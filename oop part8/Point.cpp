#include "Point.h"
#include <iostream>
using namespace std;

Point::Point(int a, int b)
{
	x = a;
	y = b;
}

void Point::Init(int a, int b)
{
	x = a;
	y = b;
}

void Point::Print()const
{
	cout << x << "\t" << y << endl;
}

int Point::GetX() const
{
	return x;
}

int Point::GetY() const
{
	return y;
}


//Point Point::operator+(Point b)
//{
//	return Point(this->x + b.x, this->y + b.y);
//}

void Point::operator()()
{
	cout << "X = " << x << endl;
	cout << "Y = " << y << endl;
}

int Point::operator()(int a)
{
	return x + y + a;
}

Point Point::operator()(Point a)
{
	return Point(x + a.x, y + a.y);
}

Point operator+(const Point a, const Point b)
{
	return Point(a.GetX() + b.GetX(), a.GetY() + b.GetY());
}

Point operator+(const Point a, const int b)
{
	return Point(a.GetX() + b, a.GetY() + b);
}

Point operator+(const int b, const Point a)
{
	return Point(a.GetX() + b, a.GetY() + b);
}

Point& operator+=(Point& p, int a)
{
	p.Init(p.GetX() + a, p.GetY() + a);
	return p;
}

Point& operator++(Point& p)
{
	p.Init(p.GetX() + 1, p.GetY() + 1);
	return p;
}

Point operator++(Point& p, int)
{
	Point temp = p;
	p.Init(p.GetX() + 1, p.GetY() + 1);
	return temp;
}

bool operator>(const Point a, const Point b)
{
	return (a.GetX() > b.GetX() && a.GetY() > b.GetY());
}

bool operator==(const Point a, const Point b)
{
	return (a.GetX() == b.GetX() && a.GetY() == b.GetY());
}

bool operator!=(const Point a, const Point b)
{
	return (a.GetX() != b.GetX() && a.GetY() != b.GetY());
}

Point& operator--(Point& p)
{
	p.Init(p.GetX() - 1, p.GetY() - 1);
	return p;
}

Point operator--(Point& p, int)
{
	Point temp = p;
	p.Init(p.GetX() - 1, p.GetY() - 1);
	return temp;
}

Point& operator-=(Point& p, int a)
{
	p.Init(p.GetX() - a, p.GetY() - a);
	return p;
}
