#include <iostream>

using namespace std;

int main()
{
    int n,ctr=0;
    cin>>n;
    while(n%10)
    {
        ctr++;
        n=n/10;
    }
    cout<<ctr;
    return 0;
}
