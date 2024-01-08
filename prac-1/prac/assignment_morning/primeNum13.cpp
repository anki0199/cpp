#include<iostream>
using namespace std;

int main(){
	int num;
	int flag=0;
	cout<<"Enter a number to check prime or not\n";
	cin>>num;
	
	for(int i=2;i<=num/2;i++){
		if(num%i==0){
			flag=1;
			break;
		}
	}
	if(num<2){
		cout<<num<<" is not a prime number";
	}else if(flag==0){
		cout<<num<<" is a prime number";
	}else{
		cout<<num<<" is not a prime number";
	}
	
	return 0;
}
