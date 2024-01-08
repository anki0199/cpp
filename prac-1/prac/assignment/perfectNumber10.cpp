#include<iostream>
int main(){

	int n;
	int i=1;
	int sum=0;
	std::cout<<"enter a number: ";
	std::cin>>n;

	if(n==1)
	{
		std::cout<<1<<"is not a perfect number"<<1;
	}

	if(n<=0)
	{
		std::cout<<"invalid choice";
	}

	else{
		
		while( i<=n){
			if(n%i==0){
				sum +=i;
			}
			i++;
		}
	}


return 0;
}
