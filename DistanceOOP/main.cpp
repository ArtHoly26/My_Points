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
	double distance(Point a) ;
	friend double distance(Point a, Point b);
	
private:
	double x;
	double x0;
};

double distance(Point a, Point b);

int main()
{
	setlocale(LC_ALL, "Rus");
	Point a{ 34 };
	Point b{ 89 };
	a.GetX();
	b.GetX();
	cout << "Дистания до точки A  = "<< a.distance(a) << endl;
	cout << "Дистания до точки Б  = " << a.distance(b) << endl;
	cout << "Расстояние между точками = " << distance(a,b) << endl;
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
double Point::distance(Point a) {return  a.x - a.x0;}

double distance(Point a, Point b) {return abs(a.x - b.x);}

