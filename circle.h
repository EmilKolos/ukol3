#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

class Circle : public Shape
{
public:    
    Circle();   
    Circle(Point center, Point perimeter);
    
    Point getCenter() const;
    void setCenter(Point newCenter);  
	
    Point getPerimeter() const;
    void setPerimeter(Point newPerimeter);
	
    double area();
    double circumference();

    void info();

protected:
    Point m_center;
    Point m_perimeter;
};

#endif // CIRCLE_H
