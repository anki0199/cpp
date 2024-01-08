#include<iostream>
#include<cstring>
using namespace std;

class Employee{
	int emp_id;
	char emp_name[20];
	double salary;
	
public:
	Employee();
	Employee(int, char*,double);
	void Accept();
	void Display();
	void Update();
	int getId();
};

Employee::Employee(){}

Employee::Employee(int id, char *n,double s){
	emp_id=id;
	strcpy(emp_name,n);
	salary=s;
}

int Employee::getId(){
	return emp_id;
}

void Employee::Update(){
	cout<<"Enter name and salary"<<endl;
	cin>>emp_name>>salary;
}

void Employee::Accept(){
	cout<<"Enter info:"<<endl;
	cin>>emp_id>>emp_name>>salary;	
}

void Employee::Display(){
	cout<<emp_id<<" "<<emp_name<<" "<<salary<<endl;
}

int main(){
	Employee e[10];
	int choice, count=0,id;
	
	while(true){
		cout<<"1. Insert Record"<<endl;
		cout<<"2. Update Record (based on id)"<<endl;
		cout<<"3. Display All Records"<<endl;
		cout<<"4. Exit."<<endl;
		
		cin>>choice;
		
		switch(choice){
			case 1:
				e[count++].Accept();
				break;
			case 2:
				cout<<"Enter id of employee to be updated"<<endl;
				cin>>id;
				for(int i=0;i<count;i++){
					if(id==e[i].getId()){
						e[i].Update();
					}
				}
			case 3:
				for(int i=0;i<count;i++){
					e[i].Display();
				}
				break;
			case 4:
				exit(0);
			
		}
	}

	return 0;
}


