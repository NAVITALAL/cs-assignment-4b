#include<iostream>
using namespacestd;
int findMaxRec(int A[],int n)
{
if(n==1)
return A[0];
return max(A[n-1], findMaxRec(A,n-1));
}
int findMinRec(int A[], int n)
{
if (n== 1)
return A[0];
return min(A[n-1],findMinRec(A,n-1));
}
int main()
{
int A[] ={3,9,10,2,-34,19,23,67,-5};
int n=sizeof(A)/sizeof(A[0]);
cout<<"max= "<<findMaxRec(A,n)<<endl;
cout<<"min= "<<findMinRec(A,n);
return 0;
}
