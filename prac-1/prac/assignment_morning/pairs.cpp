#include<iostream>
using namespace std;
int main(){
	int n=4;
	
	for(int i=1;i<n;i++){
		for(int j=1;j<n;j++){
			for(int k=1;k<n;k++){
				cout<<"("<<i<<", "<<j<<", "<<k<<")\n";
			}	
		}
	}

	return 0;
}
