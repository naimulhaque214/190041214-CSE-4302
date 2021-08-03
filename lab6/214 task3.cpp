#include<bits/stdc++.h>
using namespace std;

class FLOAT
{
private:
    float x;
public:
    void setData(float a)
    {
        x=a;
    }
    void getData()
    {
        cout<<x<<endl;
    }
    FLOAT operator+(FLOAT c)
    {
        FLOAT temp;
        temp.x=x+c.x;
        return temp;
    }

    FLOAT operator-(FLOAT c)
    {
        FLOAT temp;
        temp.x=x-c.x;
        return temp;
    }
    FLOAT operator*(FLOAT c)
    {
        FLOAT temp;
        temp.x=x*c.x;
        return temp;
    }
    FLOAT operator/(FLOAT c)
    {
        FLOAT temp;
        temp.x=x/c.x;
        return temp;
    }
};

int main ()
{
    FLOAT f1,f2,f3,f4,f5,f6;
    f1.setData(2.5);
    f2.setData(3.1);
    f1.getData();
    f2.getData();
    f3=f1+f2;
    f3.getData();

    f4=f1-f2;
    f4.getData();

    f5=f1*f2;
    f5.getData();

    f6=f1/f2;
    f6.getData();


}
