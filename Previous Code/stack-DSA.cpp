#include<iostream>
#include<string>
using namespace std;


   int size =5;
   int stackArr[5];
   int top = -1;

        void push(int val){
           if (top == size-1){
                cout<<"Stack overflow"<<endl;
            }else{
                top++;
                stackArr[top] = value;
                cout<< value <<"Pushed\n"; 
            }
        }

        void pop(){
            if (top == -1){
                cout<<"Stack underflow\n";
                return -1;
            }else{
                int temp = stackArr[top];
                top--;
                return -1;
            }
        }


        void top(){
            if (top == -1){
                cout<<"Stack empty\n";
                return -1;
            }else{
                return stackArr[top];
            }           
        }
        bool isEmpty(){
            return top == -1;
        }

int main(){
    push(10);
    push(20);
    push(30);

    cout << "Top: " << top() << endl;

    cout << "Popped: " << pop() << endl;

    cout << "Stack empty? " << (isEmpty() ? "Yes" : "No") << endl;

    return 0;
}