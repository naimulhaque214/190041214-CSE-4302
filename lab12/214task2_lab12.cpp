#include <bits/stdc++.h>
#include <process.h>
using namespace std;
const int LIMIT = 20;
template <class T>
T amax (T* arr, int size)
{
    T max_val=arr[0];
    for (int i=0;i<size;i++)
    {
        if (arr[i]>max_val)
            max_val=arr[i];
    }
    return max_val;
}

int main ()
{
    int sa[LIMIT];
    for(int i=0; i<LIMIT; i++) //insert elements
    {
        sa[i] = i*1;
    }
    for(int i=0;i<LIMIT;i++) //display elements
    {
        cout<<sa[i]<<endl;
    }
    cout<<"The largest element is "<<amax(sa, LIMIT)<<endl;

    return 0;

}

