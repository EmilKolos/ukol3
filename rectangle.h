#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"
#include "point.h"


class Rectangle: public Shape{

public: 
    Rectangle();
    Rectangle(Point cornerA, Point cornerB);

    Point getCornerA() const;
    void setCornerA(Point newCornerA);
	
    Point getCornerB() const;
    void setCornerB(Point newCornerB);
	
    double area();
    double circumference();

    void info();

protected:    
    Point m_cornerA;
    Point m_cornerB;
};

#endif // RECTANGLE_H
