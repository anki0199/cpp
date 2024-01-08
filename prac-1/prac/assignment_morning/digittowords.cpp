#include<iostream>
using namespace std;
void word(int rem);
int main()
{

int num,rev=0;

cout<<"enter a number";
cin>>num;


while(num>0){
		int digit=num%10;
		rev =rev*10 + digit;
		num /=10;
}

while(rev>0){
	rem=rev%10;
	word(rem);
	rev/=10;
}

return 0;
}

void word(int rem){

switch(rem){
	case 0: 
	cout<<"zero";
	break;

	case 1: 
	cout<<"one";
	break;

	case 2: 
	cout<<"two";
	break;

	case 3: 
	cout<<"three";
	break;

	case 4: 
	cout<<"four";
	break;

	case 5: 
	cout<<"five";
	break;

	case 6: 
	cout<<"six";
	break;

	case 7: 
	cout<<"seven";
	break;

	case 8: 
	cout<<"eight";
	break;

	case 9: 
	cout<<"nine";
	break;

}
}
