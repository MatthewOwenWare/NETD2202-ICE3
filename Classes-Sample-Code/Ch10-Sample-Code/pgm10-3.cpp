/* pgm10-3.cpp - Chapter 10 Sample Program

   Modified by: T. MacDonald, Aug 2012
   For: CPRG 4202 - C++ Programming II
   Reference:
   Bronson, G. (2011). A First Book of C++, Fourth Edition. Course Technology.
*/
#include <iostream>
#include <iomanip>
using namespace std;

// class declaration section
class Date
{
  private:
    int month;
    int day;
    int year;
  public:
  	//Date();
    Date(int = 7, int = 4, int = 2012);   // constructor
    Date(long);           // another constructor
    void showDate();      // member method to display a date
};

// class implementation section
Date::Date(int mm, int dd, int yyyy)
{
  month = mm;
  day = dd;
  year = yyyy;
}
Date::Date(long yyyymmdd)
{
  year = int(yyyymmdd/10000.0);   // extract the year
  month = int( (yyyymmdd - year * 10000.0)/100.00 ); // extract the month
  day = int(yyyymmdd - year * 10000.0 - month * 100.0); // extract the day
}
void Date::showDate()
{
  cout << "The date is ";
  cout << setfill('0')
       << setw(2) << month << '/'
       << setw(2) << day << '/'
       << setw(2) << year % 100; // extract the last 2 year digits
  cout << endl;
  return;
}

int main()
{
  Date a;
  Date b(4,1,1998);
  Date c(20090515L); // declare three objects
  a.showDate();           // display object a's values
  b.showDate();           // display object b's values
  c.showDate();           // display object c's values

  cout << endl << endl;
  //system("pause");
  return 0;
}
