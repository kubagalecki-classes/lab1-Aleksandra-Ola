#include <iostream>

class Wektor2D
{
  public:
  double x;
  double y;
  double norm { 
    return sqrt(x*x+y*y);
  }
}

int main()
{
    puts("Hello, World!");
}
