
#include<iostream>
#include <string>
using namespace std;

class calculator{
    int num1,num2;
    char opt;
    public:
    void display(){
        cout<<"\n*****Welcome to calculator window*****\n"<<endl;
        cout<<"Enter Number 1 : ";
        cin>>num1;
        cout<<"Enter Number 2: ";
        cin>>num2;
        cout<<"Select as an operator..."<<endl;
        cout<<"+,-,*,/"<<endl;
        cin>>opt;
        if (opt == '+'){
            cout<<"The Sum is: ",add(num1,num2);
        }
        else if (opt == '-'){
            cout<<"The subtract is: ",subtract(num1,num2);
        }
        else if (opt == '*'){
            cout<<"The multiply is: ",multiply(num1,num2);
        }
        else if (opt == '/'){
            cout<<"The divide is: ",divide(num1,num2);
        }
    }
    
    void add(int num1,int num2){
        cout<<num1+num2;
    }    
    void subtract(int num1,int num2){
        cout<<num1-num2;
    }  
    void multiply(int num1,int num2){
        cout<<num1*num2;
    }  
    void divide(int num1,int num2){
        cout<<num1/num2;
    }  
};
int main(){
calculator obj;
obj.display();
    return 0;
}