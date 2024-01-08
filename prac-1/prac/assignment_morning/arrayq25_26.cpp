#include<iostream>
using namespace std;

void insert(int n,  int arr){
int index,j=0;
	cout<<"Enter position of element to be inserted: ";
	cin>>index;
	int ans[n+1];
	for(int i=0;i<n;i++){
		if(index-1==i)
			cin>>ans[j++];
		ans[j++]=arr[i];
	}	
	
	for(int i=0;i<n+1;i++){
		cout<<ans[i]<<" ";
	}
}

int main(){

	int n;
	int index,j=0;
	cout<<"Enter number of elements in array: ";
	cin>>n;
	int arr[n];
	int ans[n-1];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	/*
	cout<<"Enter position of element to be deleted: ";
	cin>>index;
	
	for(int i=0;i<n;i++){
		if(index-1==i)
			continue;
		ans[j++]=arr[i];
	}	
	
	for(int i=0;i<n-1;i++){
		cout<<ans[i]<<" ";
	}
	*/
	insert(n,arr);
	
	return 0;
}
