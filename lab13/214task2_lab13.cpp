#include<bits/stdc++.h>
using namespace std;

namespace start
{
  int p = 50;
}

namespace my_namespace
{
  int p = 100;
}

int main()
{

  cout << start::p << endl;
  cout << my_namespace::p << endl;

  return 0;
}
