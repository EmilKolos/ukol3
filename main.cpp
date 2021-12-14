#include <iostream>

#include "point.h"
#include "shape.h"
#include "rectangle.h"
#include "circle.h"

using namespace std;

int main()
{
    ////////////////////////
    /// \brief Point

    Point p1;
    p1.setX(1);
    p1.setY(2);
    cout << "p1: [" << p1.getX() << "," << p1.getY() << "]" << endl;

    Point p2;
    p2.setX(2);
    p2.setY(3);
    cout << "p2: [" << p2.getX() << "," << p2.getY() << "]" << endl;

    cout << "X Difference: " << p1.xDifference(&p2) << endl; // diff 1
    cout << "Y Difference: " << p1.yDifference(&p2) << endl; // diff 1
    cout << "Distance of p1 and p2: " << p1.distance(&p2) << endl;

   ////////////////////////
   /// \brief Shape

   // Default constructor
   Shape s1;
   s1.info();

   // Explicit constructor
   Shape s2("Hexagon", 6);
   s2.info();

   ////////////////////////
   /// \brief Rectangle

   Point cornerA1;
   cornerA1.setX(3);
   cornerA1.setY(1);

   Point cornerB1;
   cornerB1.setX(6);
   cornerB1.setY(2);

   // Default constructor
   Rectangle r1;
   r1.setCornerA(cornerA1);
   r1.setCornerB(cornerB1);
   r1.info();

   // Explicit constructor
   Point cornerA2;
   cornerA2.setX(1);
   cornerA2.setY(0);

   Point cornerB2;
   cornerB2.setX(4);
   cornerB2.setY(2);

   Rectangle r2(cornerA2, cornerB2);
   r2.info();

   cout << "\tArea: " << r2.area() << endl;
   cout << "\tCircumference: " << r2.circumference() << endl;

   ////////////////////////
   /// \brief Circle

   Point center1;
   center1.setX(5);
   center1.setY(5);

   Point perimeter1;
   perimeter1.setX(5);
   perimeter1.setY(0);

   Circle c1;
   c1.setCenter(center1);
   c1.setPerimeter(perimeter1);
   c1.info();


   Point center2;
   center2.setX(2);
   center2.setY(4);

   Point perimeter2;
   perimeter2.setX(8);
   perimeter2.setY(4);
   Circle c2(center2, perimeter2);
   c2.info();

   cout << "\tArea: " << c2.area() << endl;
   cout << "\tCircumference: " << c2.circumference() << endl;
   return 0;
}
