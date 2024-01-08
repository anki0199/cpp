#include<iostream>

int main(){
	int n, m;
	
	std::cout<<"Enter positive integers for start and end of range\n";
	std::cin>>n;
	std::cin>>m;
	int start=n;
	if(n<=0)
	n=2;
	if(n==1)
	n++;
	while(n<=m){
		int flag=0;
		for(int i=2;i<=n/2;i++){
			if(n%i==0){
				flag=1;
				break;
			}
		}
		if(flag==0){
			std::cout<<n<<" ";
		}
		n++;
	}
	
}
