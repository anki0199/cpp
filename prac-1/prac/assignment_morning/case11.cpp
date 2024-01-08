#include<iostream>
using namespace std;

int main(){
	char c;
	cout<<"enter a character\n";
	cin>>c;
	
	if(c>=97 && c<=122)
	{
	c=c-32;
	cout<<c;
	}
	
	else if(c>=65 && c<=90)
	{
	c=c+32;
	cout<<c;
	}
	else{
		cout<<"Please enter a valid alphabet";
	}
	return 0;
}                                                                                                                                                                                       
