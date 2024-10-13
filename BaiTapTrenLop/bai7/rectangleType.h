#ifndef H_rectangleType
#define H_rectangleType

#include <iostream>
using namespace std;

class rectangleType
{
    private:
        double length;
        double width;
    public:
        void setDimension(double a, double b);
        double getLength() const
        {
            return length;
        }
        double getWidth() const
        {
            return width;
        }
        double area() const
        {
            return length*width;
        }
        double perimeter() const
        {
            return 2*(length + width);
        }
        void print() const;
        rectangleType();
        rectangleType(double a, double b):length(a), width(b){}

        rectangleType operator+(const rectangleType& hinhchunhat2);
        rectangleType operator-(const rectangleType& hinhchunhat2);
        bool operator==(const rectangleType& hinhchunhat2);
};

void rectangleType::setDimension(double a, double b)
{
    length = a;
    width = b;
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
    length = 0;
    width = 0;
}

//-------------------------------------------------------------------------

rectangleType rectangleType::operator+(const rectangleType& hinhchunhat2)
{
    rectangleType kq;
    kq.length = length + hinhchunhat2.length;
    kq.width = width + hinhchunhat2.width;
    return kq;
}

rectangleType rectangleType::operator-(const rectangleType& hinhchunhat2)
{
    rectangleType kq;
    kq.length = length - hinhchunhat2.length;
    kq.width = width - hinhchunhat2.width;
    return kq;
}

bool rectangleType::operator==(const rectangleType& hinhchunhat2)
{
    if (length == hinhchunhat2.length)
    {
        if (width == hinhchunhat2.width)
        {
            return 1;
        }
    }
    return 0;
}

#endif