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
	if(temp==rev)
		std::cout<<temp<<" Is palindrome ";
	else
		std::cout<<temp<<" Is not palindrome ";
	
return 0;
}
