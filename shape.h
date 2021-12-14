#ifndef SHAPE_H
#define SHAPE_H

#include <string>
#include "point.h"

using namespace std;

class Shape
{
public:
    Shape();
    Shape(string name, int numberOfPoints);

    int getNumberOfPoints() const;
    const string &getName() const;
    void info();

protected:
    string m_name; 
    int m_numberOfPoints;
};

#endif // SHAPE_H
