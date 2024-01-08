#include<iostream>
using namespace std;

int main(){
int num,temp;
cout<<"enter a number";
cin>>num;
temp=num;

int rem=0,sum=0;
while(num>0)
{
rem=num%10;
sum+= rem*rem*rem;
num=num/10;

}

if(sum == temp)
{
cout<<"it is a armstrong number";
}
else
cout<<"it is not an armstrong number";

return 0;
}
