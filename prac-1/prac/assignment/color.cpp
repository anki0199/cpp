
/*Given an array of n integers, find the largest element and return if from function.
int findMax(int nums[], int n);
*/


#include<iostream>
using namespace std;

int findMax(int nums[], int n){
int max= nums[0];
for (int i=1; i<n; i++){
if (nums[i]>max){
max=nums[i];
}
}
return max;
}

int main(){
int n;

cout<<"enter size";
cin>>n;
int a[n];
cout<<"enter array elements";
for(int i=0; i <n;i++){
cin>>a[i];
}
//int array[]={2,3,4,5};
//int n= 4;

cout<<findMax(a,n);

}
