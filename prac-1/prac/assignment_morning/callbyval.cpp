#include<iostream>
using namespace std;

void Fibo(int n){
  int term1=0;
  int term2=1;
  cout<<term1<<" "<<term2<<" ";
  for(int i=2;i<n;i++){
  	int next=term2;
  	term2=term1+term2;
  	term1=next;
  	cout<<term2<<" ";
  }
}

int main()
{
	int n;
  	cout<<"enter number: ";
  	cin>>n;
  	Fibo(n);
	return 0;
}
