#include <iostream>
#include <cmath>

using namespace std;

class Point
{
public:
	
	Point();
	Point(double x);
	void GetX() const;
	double SetX(double x);
	double distance() ;
	friend double distance(Point x1, Point x2);
	
private:
	double x;
	double x0;
};

double distance(Point x1, Point x2);

int main()
{
	setlocale(LC_ALL, "Rus");
	Point a{ 34 };
	Point b{ 89 };
	Point c{ -44 };
	Point d{ 55 };
	a.GetX();
	b.GetX();
	c.GetX();
	d.GetX();
	cout << "Дистания до точки A  = "<< a.distance() << endl;
	cout << "Дистания до точки Б  = " << b.distance() << endl;
	cout << "Дистания до точки C  = " << c.distance() << endl;
	cout << "Дистания до точки D  = " << d.distance() << endl;
	cout << "Расстояние между точками = " << distance(c,b) << endl;
	cout << "Расстояние между точками = " << distance(a,d) << endl;
}

Point::Point()
{
  x0 = 0;
  x = 0;
}
Point::Point (double x)
{
	this->x = x;
	x0 = 0;
	
}
void Point::GetX() const {cout <<"Точка:" << x << endl;}
double Point::SetX(double x) {return this-> x=x;}
double Point::distance() {return  x - x0;}

double distance(Point x1, Point x2) {return abs(x1.x - x2.x);}

