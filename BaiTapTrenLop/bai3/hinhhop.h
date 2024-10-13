#ifndef H_hinhhop
#define H_hinhhop

#include "hinhchunhat.h"

class boxType:public rectangleType
{
    public:
        void setDimension (double x, double y, double h);
        double getHeight() const;
        double area() const;
        double volume() const;
        void print() const;
        boxType();
        boxType(double x, double y, double h);
    private:
        double height;
};

void boxType::setDimension(double x, double y, double h)
{
    rectangleType::setDimension(x,y);
    height = h;
}

double boxType::getHeight() const
{
    return height;
}

double boxType::area() const
{
    return 2*(rectangleType::getLength()*rectangleType::getWidth() + getLength()*height + getLength()*getWidth());
}

double boxType::volume() const
{
    return (getLength()*getWidth()*height);
}

void boxType::print() const
{
    rectangleType::print();
    cout << "Chieu cao: " << height << endl;
    cout << "Dien tich xung quanh: " << area() << endl;
    cout << "The tich: " << volume() << endl;
}

boxType::boxType()
{
    height = 0.0;
}

boxType::boxType(double x, double y, double h):rectangleType(x, y)
{
    height=h;
}

#endif