#include<iostream>
using namespace std;

int strLen(char s[]){
	int i=0;
	int count=0;
	while(s[i]!='\0'){
		count++;
		i++;
	}		
	return count;
}
void strCpy(char dest[], char src[]){
	int i=0;
	while(src[i]!='\0'){
		dest[i]=src[i];
		i++;	
	}
	i=0;
	while(dest[i]!='\0'){
		cout<<dest[i];
		i++;	
	}
}

bool Compare(char s1[], char s2[]){
	int i=0;
	bool flag=true;
	if(strLen(s1)!=strLen(s2))
	 return false;
	 
	while(s1[i]!='\0'){
		if(s1[i]!=s2[i]){
			flag=false;
		}
		i++;	
	}
	return flag;
}

int main(){
	
	/*
	char s[]="divya";
	int n=strLen(s);
	cout<<"length:"<<n;
	
	char src[]="divya";
	int len=strLen(src);
	char dest[len];
	strCpy(dest,src);
	*/
	char s1[]="hello";
	char s2[]="helyo";
	bool equ=Compare(s1,s2);
	 
	if(equ){
		cout<<"The string is equal";
	}else{
		cout<<"The string is not equal";
	}
	

	return 0;
}

