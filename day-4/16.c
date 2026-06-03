#include<stdio.h>
int main()
{int a,b,i,temp,r,sum;
printf("Enter starting number:");
scanf("%d",&a);
printf("Enter ending number:");
scanf("%d",&b);
printf("Armstrong numbers are:\n");
for(i=a;i<=b;i++)
{temp=i;
sum=0;
while(temp>0)
{r=temp%10;
sum=sum+r*r*r;
temp=temp/10;}
if(sum==i)
printf("%d ",i);}
return 0;
}