#include<iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter a number\n";
	cin>>num;
	int digit=0;
	int product=1;
	int n=num ;
	
	while(n>0){
		digit= n%10;
		product *=digit;
		n /=10;
	}
	cout<<"Product of all digits of "<<num<<" is "<<product<<endl; 
	return 0;
} 
