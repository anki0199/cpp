#include<iostream>
int main(){
	int n;
	int rev=0;
	std::cout<<"enter a value:";
	std::cin>>n;
	int temp=n;
	while(n>0){
		int digit=n%10;
		rev =rev*10 + digit;
		n /=10;
	}
	std::cout<<"Reverse of "<<temp<<" is "<<rev;
	
return 0;
}
