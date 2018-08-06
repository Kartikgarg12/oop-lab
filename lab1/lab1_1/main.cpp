#include <iostream>

using namespace std;
int main()
{
    int i,j,a=0;
    cin>>i>>j;
    a=i%j;
    a=j-a;
    i=a+i;
    cout<<i;
    return 0;
}
