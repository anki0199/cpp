#include<iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter a number\n";
	cin>>num;
	int digit=0;
	int sum=0;
	int n=num ;
	if(n<0){
		n=-1*n;
	}
	while(n>0){
		digit= n%10;
		sum +=digit;
		n /=10;
	}
	cout<<"Sum of all digits of "<<num<<" is "<<sum<<endl; 
	return 0;
}
