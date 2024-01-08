#include<iostream>
using namespace std;
int main()
{
int num, digit,count=0;

cout<<"enter a number";
cin>>num;

cout<<"enter a digit";
cin>>digit;

while(num>0){
	int rem=num%10;
	if(rem==digit)
		count++;
	num/=10;
}
cout<<"Count of digit "<<digit<<" is "<<count;
return 0;
}
