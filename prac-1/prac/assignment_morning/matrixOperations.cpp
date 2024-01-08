#include<iostream>
using namespace std;


void Accept(int arr[][3]){
	cout<<"enter your elements \n";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++){
			cin>>arr[i][j];
		}
	}
}

void Display( int arr[][3]){
	cout<<"Matrix is \n";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++){
			cout<<arr[i][j]<<"\t";
		}
		cout<<endl;
	}
}

void transpose(int arr[][3]){
	int temp[3][3];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++){
			temp[i][j]=arr[j][i];
		}
	}
	cout<<"transpose ";
	Display(temp);
}

void matAdd(int a1[][3], int a2[][3]){
	int result[3][3];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++){
			result[i][j]=a1[i][j] + a2[i][j];
		}
	}
	Display(result);
}

void matMul(int a1[][3], int a2[][3]){
	int resMul[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			resMul[i][j]=0;
			for(int k=0;k<3;k++){
				resMul[i][j] += a1[i][k]*a2[k][j];
			}
		}
	}
	Display(resMul);
}
int main(){

	int arr[3][3];
	int arr2[3][3];
	Accept(arr);
	Accept(arr2);
	/*
	Display(arr);
	transpose(arr);
	*/
	//matAdd(arr,arr2);
	matMul(arr,arr2);
	return 0;
}

