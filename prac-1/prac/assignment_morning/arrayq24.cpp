#include<iostream>
using namespace std;

int main(){

	int n;
	int max;
	int min;
	cout<<"Enter number of elements in array: ";
	cin>>n;
	int arr[n];
	int ans[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	max=arr[0];
	for(int i=1;i<n;i++){
		if(max<arr[i]){
			max=arr[i];
		}
	}
	
	min=arr[0];
	for(int i=1;i<n;i++){
		if(min>arr[i]){
			min=arr[i];
		}
	}
	
	
	for(int i=0;i<n;i++){
		ans[i]=arr[i]*5;
	}
	
	cout<<"Max element is: "<<max<<endl;
	cout<<"Max element is: "<<min<<endl;
	
	for(int i=0;i<n;i++){
		cout<<ans[i]<<" ";
	}
	
	return 0;
}
