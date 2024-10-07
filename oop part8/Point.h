#pragma once
class Point
{
	int x;
	int y;
public:
	Point() = default;
	Point(int a, int b);
	void Init(int a, int b);
	void Print() const;
	int GetX() const;
	int GetY() const;

	//������������� ���� ������ � ��������
	//Point operator+(Point b);

	//������������� ()
	void operator() ();
	int operator() (int a);
	Point operator() (Point a);


};

//����� �-��
Point operator+(const Point a, const Point b);
Point operator+(const Point a, const int b);
Point operator+(const int b, const Point a);
Point& operator+=( Point& p, int a);
Point& operator++(Point& p);
Point operator++(Point& p, int);
bool operator>(const Point a, const Point b);
bool operator==(const Point a, const Point b);
bool operator!=(const Point a, const Point b);
Point& operator--(Point& p);
Point operator--(Point& p, int);
Point& operator-=(Point& p, int a);