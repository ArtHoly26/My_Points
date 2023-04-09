#include <iostream>
#include <cmath>

using namespace std;

class Point
{
public:
	
	Point();
	Point(double x, double y);
	void GetX() const;
	void GetY() const;
	void GetPoint() const;
	double SetX(double x);
	double SetY(double y);
	double SetXY(double x,double y);
	double distance() ;
	friend double distance(Point xy1, Point xy2);
	
private:
	double x;
	double y;
	double x0;
	double y0;
};

double distance(Point x1, Point x2);

int main()
{
	setlocale(LC_ALL, "Rus");
	Point a {25,30};
	Point b {15,18};
	Point c {25,10};
	Point d {21,15};
	a.GetPoint();
	b.GetPoint();
	c.GetPoint();
	d.GetPoint();
	cout << "Дистания до точки a  = "<< a.distance() << endl;
	cout << "Дистания до точки b  = " << b.distance() << endl;
	cout << "Дистания до точки c  = " << c.distance() << endl;
	cout << "Дистания до точки d  = " << d.distance() << endl;
	cout << "Расстояние между точками = " << distance(c,b) << endl;
	cout << "Расстояние между точками = " << distance(a,d) << endl;
}

Point::Point ()
{
  x = 0;
  y = 0;
  x0 = 0;
  y0 = 0;
}
Point::Point (double x, double y)
{
	this->x = x;
	this->y = y;
	x0 = 0;
	y0 = 0;
}

void Point::GetX() const 
{
	cout <<"Точка:" << x << endl;
}
void Point::GetY() const
{
	cout << "Точка:" << y << endl;
}
void Point::GetPoint() const
{
	cout << "X : " << x << "\t";
	cout << "Y : " << y << endl;
}

double Point::SetX(double x) 
{

	return this-> x=x;
}
double Point::SetY(double y)
{

	return this->y = y;
}
double Point::SetXY(double x, double y)
{
	return this->x = x;
	       this->y = y;
}

double Point::distance() 
{
	return  sqrt(pow(x - x0, 2) + pow(y - y0, 2));
}
double distance(Point xy1, Point xy2) 
{ 
	return sqrt(pow(xy2.x - xy1.x, 2) + pow(xy2.y - xy2.y,2)); 
}

