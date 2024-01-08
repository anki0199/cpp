#include<iostream>
using namespace std;

int main(){
int l;
int b;
cout<<"enter length of rectangle: ";
cin>>l;
cout<<"enter breadth of rectangle: ";
cin>>b;

/*for(int i=0;i<n;i++){
	for(int j=0;j<=i;j++){
		cout<<"* ";
	}
	cout<<'\n';
}

for(int i=0;i<n;i++){
	for(int j=0;j<n-i;j++){
		cout<<"* ";
	}
	cout<<'\n';
}
*/

for(int i=1;i<=b;i++)
{
	for(int j=1;j<=l;j++){
	if (i==1 || i==b || j==1 || j==l)
	{
		cout<<"* ";
	}
	else {
	cout<<"  ";
}

}
cout<<"\n";
}


return 0;
}

