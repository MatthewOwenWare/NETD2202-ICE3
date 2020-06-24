/* pgm10-4.cpp - Chapter 10 Sample Program

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
    Date();    // constructor
    ~Date();   // destructor
    void showDate();
};
// class implementation section
Date::Date()   // user-defined default constructor
{
  cout << "*** A Date object is being initialized ***\n";
  month = 1;
  day = 1;
  year = 2015;
}
Date::~Date()  // user-defined default destructor
{
  cout << "*** A Date object is going out of existence ***\n";
}
void Date::showDate()
{
  cout << "        The date is " << setfill('0')
       << setw(2) << month << '/'
       << setw(2) << day << '/'
       << setw(2) << year % 100; // extract the last 2 year digits
  return;
}
int main()
{
  const int NUMDATES = 5;
  Date thedate[NUMDATES];
  for(int i = 0; i < NUMDATES; i++)
  {
    thedate[i].showDate();
    cout << endl;
  }
  
  cout << endl << endl;
  //system("pause");
  return 0;
}
