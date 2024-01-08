//sumOfAllNumbersInRange3.cpp

#include<iostream>

int main(){
	int n, m;
	int sum=0;
	std::cout<<"Enter start and end of range\n";
	std::cin>>n;
	std::cin>>m;
	int start=n;
	while(n<=m){
		sum += n;
		n++;
	}
	std::cout<<"sum of all numbers between "<<start<<" and "<<m<<" is "<<sum;
}
