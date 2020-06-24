/* pgm10-8.cpp - Chapter 10 Sample Program

   Modified by: T. MacDonald, Aug 2012
   For: CPRG 4202 - C++ Programming II
   Reference:
   Bronson, G. (2011). A First Book of C++, Fourth Edition. Course Technology.
*/

#include <iostream>
using namespace std;

// class declaration section
class Employee
{
  private:
    static double taxRate;
    int idNum;
  public:
    Employee(int = 0);      // constructor
    void display();         // accessor method
    static void dispRate(); // static member method
};

// static member definition
double Employee::taxRate = 0.07;

// class implementation section
Employee::Employee(int num)
{
  idNum = num;
}

void Employee::display()
{
  cout << "Employee number " << idNum
       << " has a tax rate of " << taxRate << endl;
  return;
}

void Employee::dispRate()
{
  cout << "The static tax rate is " << taxRate << endl;
  //return;
}

int main()
{
  Employee emp1 = Employee(11122);
  Employee emp2(11133);

  Employee::dispRate();   // call the static member methods
  
  emp1.dispRate();
  
  //emp1.display();
  //emp2.display();

  cout << endl << endl;
  //system("pause");
  return 0;
}
