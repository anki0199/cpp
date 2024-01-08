#include<iostream>
using namespace std;
int main(){
	int num1,num2,temp;
	
	
	
	cout<<"enter two numbers\n";
	cin>>num1>>num2;
	
	temp=num1;
	num1=num2;
	num2=temp;
	
	cout<<"the numbers after swapping are  "<<num1<<" "<<num2;
	
	
	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;
	
	cout<<"\nthe numbers after swapping are  "<<num1<<" "<<num2;
	
	return 0;
}
