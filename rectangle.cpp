#include "rectangle.h"
#include "shape.h"
#include <string.h>
#include <iostream>

using namespace std;

Rectangle::Rectangle():Shape("Rectangle", 2)
{
}

Rectangle::Rectangle(Point cornerA, Point cornerB):Shape("Rectangle", 2){
    m_cornerA = cornerA;
    m_cornerB = cornerB;
}

Point Rectangle::getCornerA() const
{
    return m_cornerA;
}

void Rectangle::setCornerA(Point newCornerA)
{
    m_cornerA = newCornerA;
}

Point Rectangle::getCornerB() const
{
    return m_cornerB;
}

void Rectangle::setCornerB(Point newCornerB)
{
    m_cornerB = newCornerB;
}

double Rectangle::area()
{
    double a =  m_cornerA.xDifference(&m_cornerB);
    double b = m_cornerA.yDifference(&m_cornerB);
    return a*b;
}

double Rectangle::circumference()
{
    double a =  m_cornerA.xDifference(&m_cornerB);
    double b = m_cornerA.yDifference(&m_cornerB);
    return 2*(a+b);
}

void Rectangle::info()
{
    Shape::info();
    cout << "\tCorner A: " << "[" << m_cornerA.getX() <<", " << m_cornerA.getY() << "]" << endl;
    cout << "\tCorner B: " << "[" << m_cornerB.getX() <<", " << m_cornerB.getY() << "]" << endl;
}
