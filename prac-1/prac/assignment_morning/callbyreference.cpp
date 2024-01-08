#include<iostream>
using namespace std;

/*
void swap(int *n1, int *n2){
	int temp=*n1;
	*n1=*n2;
	*n2=temp;
}

int *addition(int *n1, int *n2){
	int c=*n1+*n2;
	return &c;
}
*/
int c=34;
int *sum(int n1, int n2){
	int c=n1+n2;
	return &c;
}

int main(){
	int num1=4;
	int num2=7;
	/*
	cout<<" num1= "<<num1<<" num2= "<<num2<<'\n';
	swap(&num1,&num2);
	cout<<" num1= "<<num1<<" num2= "<<num2;
	*/
	int*d=sum(1,6);
	cout<<*d;
	return 0;
	
}


