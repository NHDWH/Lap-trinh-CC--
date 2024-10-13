#ifndef H_personalInfo
#define H_personalInfo

#include "personType.h"
#include "dateType.h"

class personalInfo
{
    public:
        void setpersonalInfo(string ho, string ten, int day, int month, int year, int id);
        void printpersonalInfo() const;
        personalInfo(string ho = " ", string ten = " ", int day = 0, int month = 0, int year = 0, int id = 1);
    private:
        personType name;
        dateType bDay;
        int personID;
};

void personalInfo::setpersonalInfo(string ho, string ten, int day, int month, int year, int id)
{
    name.setName(ho, ten);
    bDay.setDate(day, month, year);
    personID = id;
}

void personalInfo::printpersonalInfo() const
{
    name.print();
    bDay.printDate();
    cout << "MSSV: " << personID;
}

personalInfo::personalInfo(string ho, string ten, int day, int month, int year, int id):name(ho, ten),bDay(day, month, year)
{
    personID = id;
}

#endif