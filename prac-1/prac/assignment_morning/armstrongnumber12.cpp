#include<iostream>
using namespace std;

int main(){
	int num,rem,res=0;
	int temp;
	
	cout<<"enter a three digit number\n";
	cin>>num;
	temp=num;
	
	while(num>0)
	{
		rem=num%10;
		
		res+=rem*rem*rem;
		
		num=num/10;
	
	
	}
	
	if(temp==res)
	{
		cout<<"it is a armstrong number";
	
	}
	
	else {
		 cout<<"it is not a armstrong number";
	}
	
	return 0;
}



























