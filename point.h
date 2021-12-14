#ifndef POINT_H
#define POINT_H

class Point
{
public:
    Point();

    double getX() const;
    void setX(double newX);

    double getY() const;
    void setY(double newY);

    double xDifference(Point *p);
    double yDifference(Point *p);

    double distance(Point *p);

protected:
    double m_x;
    double m_y;
};

#endif // POINT_H
