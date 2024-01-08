#include<iostream>
using namespace std;

int main(){
	double bs,hra,da,pf,gs,net;
	
	cout<<"enter your basic salary \n";
	cin>>bs;
	
	hra=(15*bs)/100;
	da=(30*bs)/100;
	gs=(bs+hra+da);
	pf=(12.5*gs)/100;
	
	net=gs-pf;
	
	cout<<" the net salary is  "<<net;
	
	
	return 0;
}
