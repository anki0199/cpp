#include<iostream>
using namespace std;

void cond(int yr)
{
(yr%400==0)?cout<<"it is a leap year":(yr%100==0)?cout<<"it is not leap year":(yr%4==0)?cout<<"it is a leap year":cout<<"it is not leap year";

}

int main()
{
	int yr;
	cout<<"enter year";
	cin>> yr;
	
	/*if(yr%400==0)
	{
	cout<<"it is a leap year";
	}
	else if(yr%100==0){
	cout<<"it is not leap year";
	}
	else if(yr%4==0){
	cout<<"it is a leap year";
	}
	else{
	cout<<"it is not a leap year";
	} */
	
	cond(yr);

	return 0;
	}
	
	
	
	
