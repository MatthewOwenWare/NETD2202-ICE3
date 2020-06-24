/* pgm10-1.cpp - Chapter 10 Sample Program

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
  	Date(int = 7, int = 4, int = 2012); // constructor
    void setDate(int = 7, int = 4, int = 2012);   // member method to copy a date
    void showDate() const;               // member method to display a date
};
// class implementation section
Date::Date(int mm, int dd, int yyyy)
{
  //month = mm;
  //day = dd;
  //year = yyyy;
  setDate(mm, dd, yyyy);
}
void Date::setDate(int mm, int dd, int yyyy)
{
  // data validation would be in here
  
  month = mm;
  day = dd;
  year = yyyy;
  
}
void Date::showDate() const
{
    cout << "The date is ";
    cout << setfill('0')
         << setw(2) << month << '/'
         << setw(2) << day << '/'
         << setw(2) << year % 100; // extract the last 2 year digits
    cout << endl;

}

int main()
{
  Date a;
  Date b;
  Date c = Date(4,1,2000);  // declare 3 objects
  Date c(4, 1, 2000);

  b.setDate(12,25,2009);  // assign values to b's data members
  
  a.showDate();           // display object a's values
  b.showDate();           // display object b's values
  c.showDate();           // display object c's values

  cout << endl << endl;
  //system("pause");
  return 0;
}
