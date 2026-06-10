#include<iostream>
using namespace std;
long long factorial(int n){
long long f=1;
for(int i=1;i<=n;i++){
f=f*i;
}
return f;
}
int main(){
int n;
cout<<"Enter number:";
cin>>n;
cout<<"Factorial="<<factorial(n);
return 0;
}