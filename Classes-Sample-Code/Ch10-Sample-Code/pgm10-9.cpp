/* pgm10-9.cpp - Chapter 10 Sample Program

   Modified by: T. MacDonald, Aug 2012
   For: CPRG 4202 - C++ Programming II
   Reference:
   Bronson, G. (2011). A First Book of C++, Fourth Edition. Course Technology.
*/

#include <iostream>
#include <cmath>
using namespace std;

// class declaration section
class Complex
{
  // friends list
  friend double addreal(Complex&, Complex&);
  friend double addimag(Complex&, Complex&);
  private:
    double real;
    double imag;
  public:
    Complex(double = 0, double = 0);  // constructor
    void display();
};

// class implementation section
Complex::Complex(double rl, double im)
{
  real = rl;
  imag = im;
}

void Complex::display()
{
  char sign = '+';

  if(imag < 0) sign = '-';
  cout << real << sign << abs(imag) << 'i';

  return;
}

// friend implementations
double addreal(Complex &a, Complex &b)
{
  return(a.real + b.real);
}

double addimag(Complex &a, Complex &b)
{
  return(a.imag + b.imag);
}

int main()
{
  Complex a(3.2, 5.6), b(1.1, -8.4);
  double re, im;

  cout << "\nThe first complex number is ";
  a.display();
  cout << "\nThe second complex number is ";
  b.display();

  re = addreal(a,b);
  im = addimag(a,b);
  Complex c(re,im);  // create a new Complex object
  cout << "\n\nThe sum of these two complex numbers is ";
  c.display();

  cout << endl << endl;
  system("pause");
  return 0;
}
