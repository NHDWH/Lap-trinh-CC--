#ifndef H_course
#define H_course

#include <iostream>
using namespace std;

class courseType
{
    private:
        string courseName;
        string courseNum;
        int courseCredits;
    public:
        void setCourseInfo(string a, string b, int c);
        void print(ostream);
        string getCourseNumber();
        string getCourseName();
        courseType();
        courseType(string a, string b, int c);
};

void courseType::setCourseInfo(string a, string b, int c)
{
    courseName = a;
    courseNum = b;
    courseCredits = c;
}

void courseType::print(ostream)
{
    
}

string courseType::getCourseNumber()
{
    return courseNum;
}

string courseType::getCourseName()
{
    return courseName;
}

courseType::courseType()
{
    courseName = " ";
    courseNum = " ";
    courseCredits = 0;
}

courseType::courseType(string a, string b, int c)
{
    courseName = a;
    courseNum = b;
    courseCredits = c;
}

#endif