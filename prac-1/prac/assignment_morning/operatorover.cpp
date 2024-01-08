#include<iostream>
using namespace std;


class BigInt{
	int num;
	public:	
	BigInt(int n):num(n){}
	
		bool operator==(BigInt obj2){
			if(num==obj2.num){
				return true;
			}
			return false;
		}
		
		
		bool operator>=(BigInt obj2){
			if(num>=obj2.num){
				return true;
			}
			return false;
		}
		
		bool operator<=(BigInt obj2){
			if(num<=obj2.num){
				return true;
			}
			return false;
		}
		
		void Read(){
			cin>>num;
		}
		
		void Write(){
			cout<<"num= "<<num;
		}
};

int main()
{
	BigInt i(20);
	BigInt j(10);
	
	if(i>=j){
		cout<<"g eq";
	}else{
		cout<<"n g eq";
	}
	/*i.Read();
	j.Write();
	*/
	return 0;
}
