#include<iostream>
using namespace std;
int sum(int n)
{ if(n>0)
return (n%10)+sum(n/10);
}
int main()
{
int x;
cout<<"enter positive intiger";
cin>> x;
cout<<"sum of digits of"<<x<<"is"<<sum(x);
return 0;
}
