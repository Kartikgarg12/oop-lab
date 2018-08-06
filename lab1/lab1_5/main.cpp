#include <iostream>
# include<string>
using namespace std;

int main()
{
    int len=0;
    string s;
    getline(cin,s);
    for(int i=0;s[i]!='\0';i++)
    {
        len++;
    }
    cout<<len;
    return 0;
}
