#include<iostream>
using namespace std;

int main(){
	
	int n, *ptrMarks;
	int totalMarks=0;
	int avg=0;
	
	cout<<"Enter number of subjects: ";
	cin>>n;
	
	ptrMarks=(int*)malloc(n*sizeof(int));
	
	for(int i=0;i<n;i++){
		cin>>*(ptrMarks+i);
	}
	for(int i=0;i<n;i++){
		totalMarks += *(ptrMarks+i);
	}
	avg = totalMarks/n;
	
	cout<<"avg marks of all subjects is: "<<avg;
	
	free(ptrMarks);
	
	return 0;
}
