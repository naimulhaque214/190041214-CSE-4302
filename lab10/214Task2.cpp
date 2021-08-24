#include <iostream>
using namespace std;

class value
{
    int x;
    int y;
public :
    value()
    {
        x=0;
        y=0;

    }
// parameterized constructor
    value (int x1, int y1)
    {
        x=x1;
        y=y1;
    }
public:
// copy constructor
   value (value &m)
    {
        x=m.x;
        y=m.y;
    }
// assignment operator overloading
void operator = (value &m)
    {
        x=m.x;
        y=m.y;

    }
void display ()
{
cout << " Here x is : " << x << endl;
cout << " Here y is : " << y << endl;
}
};


int main ()
{
value j(10,20);
value i(j); // copy constructor is called
value k;
k=j;         // copy assignment operator is called
j.display();
i.display();
k.display();
}
