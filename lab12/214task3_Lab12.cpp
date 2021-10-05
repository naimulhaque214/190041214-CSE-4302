#include <bits/stdc++.h>
#include <process.h>
using namespace std;

const int LIMIT = 20;

template<class T>
class safearay
{
private:
    T arr[LIMIT];
public:
    class OutOfBound
    {
    public:
        int value;
        OutOfBound(int v)
        {
            value=v;
        }
    };

    T& operator [](int n) //return by reference
    {
        if( n< 0 || n>=LIMIT )
        {
            throw OutOfBound(n);
        }
        return arr[n];
    }
};

int main()
{

    try
    {
        safearay<int> sa;
        for(int j=0; j<LIMIT+1; j++) //insert elements
        {
            sa[j] = j*10; //*left* side of equal sign
        }
        for(int j=0; j<LIMIT+1; j++) //display elements
        {
            int temp1 = sa[j]; //*right* side of equal sign
            cout << "Element " << j << " is " << temp1 << endl;
        }

    }
    catch(safearay<int>::OutOfBound oob)
    {
        cout<<"Out-of-Bound "<< oob.value <<endl;
    }


    return 0;
}
