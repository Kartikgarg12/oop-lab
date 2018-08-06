#include <iostream>

using namespace std;
int fact(int a)
{
    int f;
    if(a==0)
      {
         return 1;
      }
    else{
        f=fact(a-1)*a;
        return f;
    }
    return f;
}
int main()
{
    int f=0,a=0;
    cin>>a;
    f=fact(a);
    cout<<f;
    return 0;
}
