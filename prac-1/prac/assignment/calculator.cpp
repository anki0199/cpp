
#include <iostream>



int main()
{
    int operation;
    
	do{
		std::cout<<"\nEnter 1 for string \n";
		std::cout<<"Enter 2 for integer \n";
		std::cout<<"Enter 0 to exit \n";
		
		std::cin>>operation;
		
		if(operation==1)
		{
			//std::string c1, c2;
			//std::cout<<"Enter a character";
			//std::cin >>c1>>c2 ;
			//std::cout << c1 + c2<< std::endl;
			
			char c1, c2;
    
			std::cout<<"Enter a character\n";
			std::cin>>c1>>c2 ;
			std::string res;
			res=(std::string)""+c1+c2;
			std::cout<<res;
			
		}else if(operation==2){
			char choice;
			int no1, no2,result;
			
			std::cout << "Enter two numbers ";
			std::cin>>no1>>no2;
			
			std::cout << "Enter + for addition \n";
			std::cout << "Enter - for subtraction \n";
			std::cout << "Enter * for multiplication \n";
			std::cout << "Enter / for division \n";
			std::cin>>choice;
		   
			switch(choice){
				case '+':
				    result=no1+no2;
				    std::cout<<no1<<" "<<choice<<" "<<no2<<" = "<<result;
				    break;
				case '-':
				    result=no1-no2;
				    std::cout<<no1<<" "<<choice<<" "<<no2<<" = "<<result;
				    break;
				case '*':
				    result=no1*no2;
				    std::cout<<no1<<" "<<choice<<" "<<no2<<" = "<<result;
				    break;
				case '/':
				    if(no2==0){
				        std::cout<<"not divisible 0";
				    }else{
				    result=no1/no2;
				    std::cout<<no1<<" "<<choice<<" "<<no2<<" = "<<result;
				    }
				    break;
				default:
				    std::cout<<"Invalid user input";
			}
		}else if(operation==0){
			std::cout<<"Program exited successfully";
		}else{
			std::cout<<"Invalid user operation";
		}
		
	}while(operation!=0);
  	

    return 0;
}

