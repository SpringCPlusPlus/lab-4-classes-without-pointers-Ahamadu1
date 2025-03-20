#include <iostream>
#include <cmath> // For sqrt() and pow()
#include "Point.h"

using namespace std;
Point(double xCoord, double yCoord): x(xCoord),y(yCoord){}
double Point::distanceTo(const Point& other)const{
    double distance = sqrt(pow(this.x- other.x,2)-pow(this.y- other.y,2));
    return distance


}

void Point::print()const{
    cout<<"Point: "<< this->x <<","<< this->y<<endl;
    
}