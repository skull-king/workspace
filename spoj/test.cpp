#include<iostream>
using namespace std;
main()
{
  int n;
  cin >> n;
  while (n > 1)
    if (n%2 == 0)
      n=n/2;
    else
      n=3*n+3;
}
