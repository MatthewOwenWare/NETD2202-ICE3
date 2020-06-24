/* pgm10-5.cpp - Chapter 10 Sample Program

   Modified by: T. MacDonald, Aug 2012
   For: CPRG 4202 - C++ Programming II
   Reference:
   Bronson, G. (2011). A First Book of C++, Fourth Edition. Course Technology.
*/

#include <iostream>
using namespace std;

// class declaration section
class RoomType
{
  private:
    double length; // declare length as a double variable
    double width;  // declare width as a double variable

  public:
    RoomType(double = 0.0, double = 0.0); // the constructor's declaration
    void showRoomValues() const;
    void setNewRoomValues(double, double);
    double calculateRoomArea() const;
};

// class implementation section
RoomType::RoomType(double l, double w)  // this is a constructor
{
  length = l;
  width = w;
  cout << "Created a new room object using the default constructor.\n\n";
}
void RoomType::showRoomValues() const  // this is an accessor
{
  cout << "  length = " << length
       << "\n   width = " << width << endl;
}

void RoomType::setNewRoomValues(double l, double w)  // this is a mutator
{ 
  length = l;
  width = w;
}

double RoomType::calculateRoomArea() const  // this performs a calculation
{   
  return (length * width); 
}

int main()
{
  //RoomType roomOne(12.5, 18.2);  // declare a variable of type RoomType
  
  const RoomType FIXED_ROOM (20.0, 20.0);
  
  FIXED_ROOM.showRoomValues();       // use a class method on this object
  
  //FIXED_ROOM.setNewRoomValues(10, 10);
  
  cout << "\nArea: " << FIXED_ROOM.calculateRoomArea() << endl;
  
  
  //cout << "The values for this room are:\n";
//  roomOne.showRoomValues();       // use a class method on this object
//  cout << "\nThe floor area of this room is: " << roomOne.calculateRoomArea();    // use another class method on this object

//  roomOne.setNewRoomValues(5.5, 9.3);   // call the mutator

//  cout << "\n\nThe values for this room have been changed to:\n";
//  roomOne.showRoomValues();
//  cout << "\nThe floor area of this room is: " << roomOne.calculateRoomArea();
//  
//  
  cout << endl << endl;
  //system("pause");
  return 0;
}
