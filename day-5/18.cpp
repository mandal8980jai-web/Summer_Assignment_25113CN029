#include<iostream>
using namespace std;
int main()
{int n,temp,r,sum=0,f,i;
cout<<"Enter a number:";
cin>>n;
temp=n;
while(temp>0)
{r=temp%10;
f=1;
for(i=1;i<=r;i++)
f=f*i;
sum=sum+f;
temp=temp/10;}
if(sum==n)
cout<<"Strong Number";
else
cout<<"Not a Strong Number";
return 0;
}