#include<iostream>
#include<string>
using namespace std;
int main(){

    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if (age>= 18){
        cout<<"eligible age is: "<<age <<endl;
    }else{
        cout<<"Not eligible age is: "<<age<<endl;
    }
    return 0;
}