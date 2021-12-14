#include "circle.h"
#include <math.h>
#include <iostream>

using namespace std;

Circle::Circle():Shape("Circle", 2)
{
}

Circle::Circle(Point center, Point perimeter):Shape("Circle", 2)
{
    m_center = center;
    m_perimeter = perimeter;
}

Point Circle::getCenter() const
{
    return m_center;
}

void Circle::setCenter(Point newCenter)
{
    m_center = newCenter;
}

Point Circle::getPerimeter() const
{
    return m_perimeter;
}

void Circle::setPerimeter(Point newPerimeter)
{
    m_perimeter = newPerimeter;
}

double Circle::area()
{
    double radius = m_center.distance(&m_perimeter);
    return M_PI * pow(radius,2);
}

double Circle::circumference()
{
    double radius = m_center.distance(&m_perimeter);
    return 2 * M_PI * radius;
}

void Circle::info()
{
    Shape::info();
    cout << "\tCenter: " << "[" << m_center.getX() << ", " << m_center.getY() << "]" << endl;
    cout << "\tPerimeter: " << "[" << m_perimeter.getX() << ", " << m_perimeter.getY() << "]" << endl;


}
