#include<stdio.h>
int palindrome(int n){
int r=0,temp=n;
while(n>0){
r=r*10+n%10;
n=n/10;
}
if(temp==r){
return 1;
}
return 0;
}
int main(){
int n;
printf("Enter number:");
scanf("%d",&n);
if(palindrome(n)){
printf("Palindrome");
}
else{
printf("Not Palindrome");
}
return 0;
}