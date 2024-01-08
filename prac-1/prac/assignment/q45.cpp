#include<iostream>
using namespace std;

class Matrix{
int **arr;
int row, col;

public:
	Matrix();
	Matrix(int, int);
	Matrix(Matrix &);
	~Matrix();
	void Accept();
	void Display();
};

Matrix::Matrix(){
	row=3;
	col=3;
	arr=new int*[row];
	for(int i=0;i<row;i++){
		arr[i]=new int[col];
		for(int j=0;j<col;j++){
			arr[i][j]=0;
		}
	}
}

Matrix::Matrix(int r, int c){
	row=r;
	col=c;
	arr=new int*[row];
	for(int i=0;i<row;i++){
		arr[i]=new int[col];
		for(int j=0;j<col;j++){
			arr[i][j]=0;
		}
	}
}


Matrix::Matrix(Matrix &mat1){
	row=mat1.row;
	col=mat1.col;
	
	arr=new int*[row];
	for(int i=0;i<row;i++){
		arr[i]=new int[col];
		for(int j=0;j<col;j++){
			arr[i][j]=mat1.arr[i][j];
		}
	}
}

Matrix::~Matrix(){
	delete []arr;
}

void Matrix::Accept(){
	cout<<"Enter matrix elements:"<<endl;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cin>>arr[i][j];
		}
	}
}

void Matrix::Display(){
	cout<<"Matrix elements:"<<endl;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}


int main(){
	int r,c;
	cout<<"enter number of row and col:"<<endl;
	cin>>r>>c;
	Matrix a1(r,c);
	a1.Accept();
	
	Matrix a2(a1);
	a2.Display();

return 0;
}
