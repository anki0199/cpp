#include<iostream>
using namespace std;

class Account{
	static int count;
	int acc_number;
	string user_name;
	string acc_type;
	float acc_balance;
	
public:
	Account();
	int getAccountNumber();
	int getAccountBalance();
	void setAccountBalance(float);
	void Display();
	void AddAccount();
	void withdraw();
	void Deposit();	
	void Withdraw(int);
	void Deposit(int);
};

int Account::count=0;

Account::Account(){
	this->acc_number=++count;
}

int Account::getAccountNumber(){
	return this->acc_number;
}

int Account::getAccountBalance(){
	return this->acc_balance;
}

void Account::setAccountBalance(float amount){
	 this->acc_balance = amount;
}

void Account::AddAccount(){
	int choice;
	cout<<"enter user name: ";
	cin>>this->user_name;
	cout<<"enter choice for account type"<<endl;
	cout<<" 1. For Savings account"<<endl;
	cout<<" 2. For Current account"<<endl;
	cin>>choice;
	switch(choice){
		case 1:
			this->acc_type="saving";
			this->acc_balance=0;
			break;
		case 2:
			this->acc_type="current";
			this->acc_balance=1000;
			break;
	}
	
}
void Account::Withdraw(int acc_num){
	if(this->getAccountNumber()==acc_num){
		float amount;
		cout<<"Enter amount to be withdrawn: "<<endl;
		cin>>amount;
		float balance= this->getAccountBalance();
		if(balance>amount){
			balance -=amount;
			this->setAccountBalance(balance);
			
		}else{
			cout<<"Account doesn't have sufficient balance"<<endl;
		}
		cout<<"Account balance is: "<<this->getAccountBalance()<<endl;
		cout<<endl;
	}
}
void Account::Deposit(int acc_num){
	if(this->getAccountNumber()==acc_num){
		float amount;
		cout<<"Enter amount to be deposit: "<<endl;
		cin>>amount;
		float balance= getAccountBalance();

		balance +=amount;
		setAccountBalance(balance);
		Display();
		cout<<endl;
	}
}
void Account::Display(){
	cout<<"account number: "<<acc_number<<endl;
	cout<<"user name: "<<user_name<<endl;
	cout<<"account type: "<<acc_type<<endl;
	cout<<"account balance: "<<acc_balance<<endl;
	cout<<endl;
}

int main(){
	Account a[10];

	int count=0;
	int operation;
	int acc_num;
	do {
	cout<<" choose from the following operation" <<endl;
	cout<<" 1. Add account"<<endl;
	cout<<" 2. Withdraw from account"<<endl;
	cout<<" 3. Deposit to account "<<endl;
	cout<<" 4. All account details "<<endl;
	cout<<" 5. Display individual account details "<<endl;
	cout<<" 0. Exit "<<endl;
	cin>> operation;

		switch(operation){
			
			case 1: 
				a[count].AddAccount();
				a[count++].Display();
				break;
			
			case 2:
				
				cout<<"Enter account number "<<endl;
				cin>>acc_num;
				for(int i=0;i<=count;i++){
					a[i].Withdraw(acc_num);
				}
				break;
			case 3:
				cout<<"Enter account number "<<endl;
				cin>>acc_num;
				for(int i=0;i<=count;i++){
					a[i].Deposit(acc_num);
				
				}
				break;
			
			case 4:
				
				for(int i=0;i<count;i++){
					cout<<"Details of a account number: "<<a[i].getAccountNumber()<<endl;
					a[i].Display();
					cout<<endl;				
				}
				break;
			case 5:
				cout<<"Enter account number "<<endl;
				cin>>acc_num;
				for(int i=0;i<=count;i++){
					if(a[i].getAccountNumber()==acc_num){
						a[i].Display();
						break;
					}
				}
				break;
			case 0:
				cout<<"Exited successfully"<<endl;
				exit(0);
				break;
			default : 
				cout<<"please enter valid choice";
				break;
			

		}
	}while (operation !=0);


	return 0;
}
