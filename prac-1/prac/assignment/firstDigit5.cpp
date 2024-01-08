#include<iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter a number\n";
	cin>>num;
	int digit=0;
	int n=num ;
	while(n>0){
		digit= n%10;
		n /=10;
	}
	cout<<"first digit of "<<num<<" is "<<digit<<endl; 
	return 0;
}
