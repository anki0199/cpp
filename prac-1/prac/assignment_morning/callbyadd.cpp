#include<iostream>
using namespace std;

float areaCircum(float radius){
	float area, circumference;

	int ch;
	cout<<"enter 1 for area and 2 for circumference:";
	cin>>ch;
	switch(ch){
		case 1:
			area=3.14*radius*radius;
			return area;
		case 2:
			circumference=2*3.14*radius;
			return circumference;
		default:
			cout<<"Invalid input";
	}
	return 0;
}


float areaRect(float len,float bred){
	float area,perimeter;
	int ch;
	cout<<"enter 1 for area and 2 for perimeter:";
	cin>>ch;
	switch(ch){
		case 1:
			 area=len*bred;
			return area;
			break;
		case 2:
			perimeter=2*(len+bred);
			return perimeter;
			break;
		default:
			cout<<"Invalid input";
			break;
	}
	return 0;
}


int main(){
int choice;
cout<<"enter 1 for circle and 2 for rectangle";
cin>>choice;

switch(choice)
{
case 1:
	float radius;
	cout<<"enter the radius";
	cin>>radius;
	
	float n;
	n= areaCircum(radius);
	
	cout<<n;
	
break;


case 2:
	float len,bred;
	cout<< "enter length and breadth";
	cin>>len>>bred;
	
	float q;
	q= areaRect(len,bred);
	cout<<q;
break;
	
}
	return 0;
}
