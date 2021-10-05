#include <bits/stdc++.h>
#include <iostream>
#include <process.h>
using namespace std;
const int LIMIT = 20; //array size

template <class T>

class safearay
{
private:
    T arr[LIMIT];
public:
    T& operator [](int n) //return by reference
    {
        if( n< 0 || n>=LIMIT )
        {
             cout << "\nIndex out of bounds";
             exit(1);
        }
        return arr[n];
    }
};

int main()
{

    safearay<int> sa1;
    for(int j=0; j<LIMIT; j++) //insert elements
    {
        sa1[j] = j*1; //*left* side of equal sign
    }
    for(int j=0; j<LIMIT; j++) //display elements
    {
        int temp1 = sa1[j]; //*right* side of equal sign
        cout << "Element " << j << " is " << temp1 << endl;
    }

    cout<<endl;

    safearay<double> sa2;
    for(int j=0; j<LIMIT; j++) //insert elements
    {
        sa2[j] = j*1.5; //*left* side of equal sign
    }

    for(int j=0; j<LIMIT; j++) //display elements
    {
        double temp2 = sa2[j]; //*right* side of equal sign
        cout << "Element " << j << " is " << temp2 << endl;
}


return 0;
}
