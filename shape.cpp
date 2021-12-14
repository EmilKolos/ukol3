#include "shape.h"
#include <string.h>
#include <iostream>

using namespace std;

Shape::Shape():m_name("Undefined"), m_numberOfPoints(0)
{
}

Shape::Shape(string name, int numberOfPoints){
    m_name = name;
    m_numberOfPoints = numberOfPoints;
}

const string &Shape::getName() const
{
    return m_name;
}

void Shape::info()
{
    cout << "\nName: " << m_name << endl;
    cout << "\tNumber of points: " << m_numberOfPoints << endl;
}
