// Online C++ compiler to run C++ program online
#include <iostream>

int main() {
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
    
    return 0;
}
