#include<iostream>
using namespace std;



class Point {

public:

	Point(int = 0, int = 0);  //default constructor

	void setPoint(int, int); //set coordinates

	int getX() const { return x; } //get x coordinates

	int getY() const { return y; } //get y coordinates

	void printPoint(); // print (x,y) coordinates

private:

	int x, y;

};
Point::Point(int X,int Y){
	x = X;
	y = Y;
}
void Point::setPoint(int X, int Y) {
	x = X;
	y = Y;
}

void Point::printPoint() {
	cout << "\n the circle center is (" << x << "," << y << ")";
}



class Circle :public Point {
	int rad;
public:
	Circle() {

	}
	void SetRadius(int r) {
		rad = r;
	}
	int GetRadius() {
		return rad;
	}
	void Area(){
		float area = 3.14 * rad * rad;
		cout << "The Area of Circle is \n "<<area;
	}
};
int main(){
	int x, y, r;
	cout << "Enter x ="; cin >> x;
	cout << "Enter y ="; cin >> y;
	cout << "Enter Radius ="; cin >> r;

	Circle c;
	c.setPoint(x, y);
	c.printPoint();
	c.SetRadius(r);
	cout<<"\nThe radius is"<<c.GetRadius();

	c.Area();



}