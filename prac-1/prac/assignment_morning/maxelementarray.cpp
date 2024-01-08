#include<iostream>
using namespace std;
int maxElement(int arr[],int n);
int findMin(int arr[],int n);
int findSecondLargest(int arr[],int n);

int main(){
	int n;
	cout<<"Enter no of elements in array: \n";
	cin>>n;
	
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int max=maxElement(arr,n);
	cout<<"max ele is "<<max<<endl;
	int min=findMin(arr,n);
	cout<<"min ele is "<<min<<endl;
	int secondMax=findSecondLargest(arr,n);
	cout<<"secondMax ele is "<<secondMax<<endl;
	return 0;

}

int findSecondLargest(int arr[],int n){
	int max1=arr[0];
	int max2=arr[1];
	
	for(int i=2;i<n;i++){
		if(max2>max1){
			int temp=max1;
			max1=max2;
			max2=temp;
		}
		if(max1<arr[i]){
			max2=max1;
			max1=arr[i];	
		}
		
	}
	return max2;
	
}

int findMin(int arr[],int n){
	int min=arr[0];
	
	for(int i=1;i<n;i++){
		if(min>arr[i]){
			min=arr[i];
		}
	}
	return min;
	
}


int maxElement(int arr[],int n){
	int max=arr[0];
	
	for(int i=1;i<n;i++){
		if(max<arr[i]){
			max=arr[i];
		}
	}
	return max;
	
}


