#include<stdio.h>
int armstrong(int n){
int sum=0,r,temp=n;
while(n>0){
r=n%10;
sum=sum+r*r*r;
n=n/10;
}
if(temp==sum){
return 1;
}
return 0;
}
int main(){
int n;
printf("Enter number:");
scanf("%d",&n);
if(armstrong(n)){
printf("Armstrong");
}
else{
printf("Not Armstrong");
}
return 0;
}