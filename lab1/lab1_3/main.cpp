#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int a,b,c[4],a1,r,s,i,j;
    cin>>a>>b;
 for(i=1000;i<=9999;i++)
 {
 	j=3;
 	a1=i;
 	while(a1%!=0)
 	{
 		r=a1%10;
		 c[j]=a1;
		 j--;		
	}
	if(c[0]==c[1]&&c[2]==c[3])
		s=sqrt(a1);
	if(s*s==a1)
		cout<<a1;
 }
    return 0;
}
