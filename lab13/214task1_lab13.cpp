#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100];
    int j=0;
    set <int> s;
    for(int p=0;p<20;p++)
    {
        if(p%2==1)
            s.insert(p);
        else
        {
            arr[j]=p;
            j++;
        }
    }

    vector <int> v(20);
    merge(arr, arr+10, s.begin(), s.end(), v.begin());
    for (int p : v)
    cout << p << " ";
    return 0;
}
