#include<iostream>
using namespace std;
 
 void charLine(char c,int len){
 	for(int i=0;i<len;i++){
 		cout<<c;
 	}
 	cout<<endl;
 }

int main(){
	
	 charLine('_',45);
	 cout<<"Data Type"<<"\t\t"<<"Size in Bytes"<<endl;
	 charLine('_',45);
	 cout<<"Integer"<<"\t\t"<<"4"<<endl;
	 charLine('_',45);
	 cout<<"Character"<<"\t\t"<<"1"<<endl;
	 charLine('_',45);
	 cout<<"Float"<<"\t\t"<<"4"<<endl;
	 charLine('_',45);
	 return 0; 
}

