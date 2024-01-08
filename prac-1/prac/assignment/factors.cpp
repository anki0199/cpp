#include<iostream>
int main(){

int n;
int i=1;
std::cout<<"enter a value:";
std::cin>>n;

if(n==1)
{
std::cout<<"the factor is"<<1;
}

if(n<=0)
{
std::cout<<"invalid choice";
}

else{
std::cout<<"the factors are\n";
while( i<=n)
{
	if(n%i==0){
		std::cout<<i<<'\n';
	}
	i++;
}
}


return 0;
}
