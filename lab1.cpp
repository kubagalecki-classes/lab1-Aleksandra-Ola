#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

class Wektor2D
{
public:
   
    Wektor2D()
    {
        x = 0;
        y = 0;
        cout << "wspolrzedne konstr domyslnego to  " << x << y << endl;
    }

    Wektor2D(double xx, double yy)
    {
        x = xx;
        y = yy;
    }

    void   setX(double xx) { x = xx; }
    double getX() { return x; }
    void   setY(double yy) { y = yy; }
    double getY() { return y; }

private:
    double x;
    double y;
};

Wektor2D operator+(Wektor2D& A, Wektor2D& B)
{
    return Wektor2D(A.getX() + B.getX(), A.getY() + B.getY());
}
double operator*(Wektor2D& A, Wektor2D& B)
{
    return (A.getX() * B.getX() + A.getY() * B.getY());
}

int main()
{
    cout << "zadanie 11 " << endl;
    Wektor2D v1;
    v1.setX(1.);
    v1.setY(1.);
    double x1 = v1.getX();
    double y1 = v1.getY();
    cout << x1 << y1 << endl;
    Wektor2D v2{2, 2};
    Wektor2D sum  = v1 + v2;
    double   prod = v1 * v2;
    std::cout << x1 << "   " << y1 << "   " << sum.getX() << "   " << sum.getY() << "   " << prod;
}
