class Wektor2D
{
  public:  
    Wektor2D()
    {
        x = 0;
        y = 0;
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
