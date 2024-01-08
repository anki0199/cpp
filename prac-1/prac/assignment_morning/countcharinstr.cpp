#include<iostream>
using namespace std;

int main(){


	char arr[100];
	int count=0;
	int blankCount=0;
	int word=0;
	int vowelsCount=0;
	char c;
	
	cout << "Enter a string: ";
   // cin >> arr;  will take only one word 
   cin.get(arr, 100);
    cout<<"Enter char to count: ";
    cin>>c;
    
    for(int i=0;arr[i]!='\0';i++){
    	if(arr[i]==c)
    		count++;
    		if(arr[i]==' '){
    			blankCount++;
    			word++;
    	}
    	
    	if(arr[i]=='a' || arr[i]=='e' || arr[i]=='i' || arr[i]=='o' || arr[i]=='u' ){
    		vowelsCount++;
    	}
    }
    cout << "count of "<<c<<"in string "<<arr<<" is: "<<count<< endl;
    
    cout << "blank spaces count "<<c<<" in string "<<arr<<" is: "<<blankCount<< endl;
	
	cout << "count of words "<<"in string "<<arr<<" is: "<<word+1<< endl;
	
	cout << "count of vowels "<<"in string "<<arr<<" is: "<<vowelsCount<< endl;

	
	return 0;
}


