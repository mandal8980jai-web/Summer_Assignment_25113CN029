#include<iostream>
using namespace std;
int main()
{int n,a[32],i=0,j;
cout<<"Enter a decimal number:";
cin>>n;
if(n==0)
{cout<<"Binary:0";
return 0;}
while(n>0)
{a[i]=n%2;
n=n/2;
i++;}
cout<<"Binary:";
for(j=i-1;j>=0;j--)
cout<<a[j];
return 0;
}