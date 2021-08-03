#include<iostream>
#include<cmath>
using namespace std;

class Rectangle
{
private:
    float length;
    float width;
public:
    Rectangle():length(1),width(1)
    {

    }
    Rectangle(float p, float q):length(p), width(q)
    {

    }
    float area()
    {
        return length*width;
    }
    float perimeter()
    {
        return 2*(length+width);
    }
    float diagonal()
    {
        return sqrt((length*length)+(width*width));
    }
    float diagonalAngle()
    {
        return atan(width/length);
    }
    void setValue(float p, float q)
    {
        if(p>=1  && q<20)
            length=p;
        if(p>=1 && q<20)
            width=q;
    }
    void Display()
    {
        cout<<"Area: "<<area()<<"\n"<<"Perimeter: "<<perimeter();
    }
};

int main()
{
    Rectangle r(11,7);
    cout<<"Area: "<<r.area()<<endl;
    cout<<"Perimeter: "<<r.perimeter()<<endl;
    cout<<"Diagonal: "<<r.diagonal()<<endl;
    cout<<"Angle between diagonal and length: "<<r.diagonalAngle()<<"rad"<<endl;

}
