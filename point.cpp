#include "point.h"
#include <math.h>
#include <iostream>

Point::Point()
{

}

double Point::getX() const
{
    return m_x;
}

void Point::setX(double newX)
{
    m_x = newX;
}

double Point::getY() const
{
    return m_y;
}

void Point::setY(double newY)
{
    m_y = newY;
}

double Point::xDifference(Point *p)
{
    return fabs(m_x - p->m_x);
}

double Point::yDifference(Point *p)
{
    return fabs(m_y - p->m_y);
}

double Point::distance(Point *p)
{
    return sqrt(pow(p->m_x - m_x,2) + pow(p->m_y - m_y,2));
}
