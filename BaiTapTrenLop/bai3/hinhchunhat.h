#ifndef H_hinhchunhat
#define H_hinhchunhat

#include <iostream>
using namespace std;

class rectangleType
{
    public:
        void setDimension (double x, double y);
        double getLength() const;
        double getWidth() const;
        double area() const;
        double perimeter() const;
        void print() const;
        rectangleType();
        rectangleType (double x, double y);  
    private:
        double length;
        double width;
};

void rectangleType::setDimension (double x, double y)
{
    length = x;
    width = y;
}

double rectangleType::getLength() const
{
    return length;
}

double rectangleType::getWidth() const
{
    return width;
}

double rectangleType::area() const
{
    return (length*width);
}

double rectangleType::perimeter() const
{
    return 2*(length + width);
}

void rectangleType::print() const
{
    cout << "Chieu dai: " << length << endl;
    cout << "Chieu rong: " << width << endl;
    cout << "Dien tich: " << area() << endl;
    cout << "Chu vi: " << perimeter() << endl;
}

rectangleType::rectangleType()
{
    width = 0.0;
    length = 0.0;
}

rectangleType::rectangleType (double x, double y)
{
    length = x;
    width = y;
}

#endif