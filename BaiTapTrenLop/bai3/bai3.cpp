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
    length = x; //chiều dài
    width = y; // chiều rộng
}

double rectangleType::getLength() const // trả giá trị chiều dài
{
    return length;
}

double rectangleType::getWidth() const // trả giá trị chiều rộng
{
    return width;
}

double rectangleType::area() const // trả kết quả của diện tích
{
    return (length * width);
}

double rectangleType::perimeter() const // trả kết quả của chu vi
{
    return 2*(length + width);
}

void rectangleType::print() const // hiển thị chiều dài và chiều rộng
{
    cout << "Chieu dai: " << length << endl;
    cout << "Chieu rong: " << width << endl;
    cout << "Dien tich: " << area() << endl;
    cout << "Chu vi: " << perimeter() << endl;
}

rectangleType::rectangleType() // thiết lập ban dầu không có giá trị đầu vào
{
    width = 0.0;
    length = 0.0;
}

rectangleType::rectangleType (double x, double y) // thiết lập ban đầu có giá trị đầu vào
{
    length = x;
    width = y;
}
//-------------------------------------------------------------
// boxType --> rectangleType
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
    rectangleType::setDimension(x, y);
    height = h;
}

double boxType::getHeight() const //trả giá trị chiều cao
{
    return height;
}

double boxType::area() const // trả về kết quả diện tích xung quanh
{
    return 2*(rectangleType::getLength()*rectangleType::getWidth() + getLength()*height + getLength()*getWidth());
}

double boxType::volume() const // trả kết quả thể tích
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
    height = h;
}

//-------------------------------------------------------------

int main()
{
    rectangleType hinh1;
    hinh1.print();

    cout << "********************************" << endl;
    rectangleType hinh2(15.7, 18.9);
    hinh2.print();

    cout << "********************************" << endl;
    boxType box(14.8, 18.7, 20.1);
    box.print();

    return 0;
}