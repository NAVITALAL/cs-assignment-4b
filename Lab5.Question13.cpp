
#include<iostream>
#define SIZE 4
using namespace std;
void goTrough(int arr[SIZE][SIZE],int r,int c){
if(r==SIZE){
return;
}
if(c==SIZE) return goTrough(arr,r+1,0);
cout<<arr[r][c]<<" ";
return goTrough(arr,r,c+1);
}
int main(){
int arre[SIZE][SIZE]={{1,2,3,4,},{50,101,63,200},{50,240,600,300},{700,400,399,385}};
goTrough(arre,0,0);
return 0;
}
