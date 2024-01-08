#include<iostream>
using namespace std;

class Complex{
	int real=0;
	int imaginary=0;
	static int objCount;
public:
	Complex();
	Complex(int,int);
	int getRealPart();
	int getImaginaryPart();
	void setRealPart(int);
	void setImaginaryPart(int);
	void Display();
};

Complex::Complex(){
	objCount++;
}

Complex::Complex(int r,int im){
	real=r;
	imaginary=im;
	objCount++;
}
int Complex::objCount=0;

int Complex::getRealPart(){
	return real;
}

void Complex::setRealPart(int r){
	real=r;
}

int Complex::getImaginaryPart(){
	return imaginary;
}

void Complex::setImaginaryPart(int im){
	imaginary=im;
}

void Complex::Display(){
	cout<<"Complex num is: "<<real<<" + "<<imaginary<<"i"<<endl;
	cout<<"Number of objects created: "<<objCount<<endl;
}

int main(){
	
	Complex c1;
	c1.Display();
	
	Complex c2(2,4);
	c2.Display();
		
	return 0;
}
