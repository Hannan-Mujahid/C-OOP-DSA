// if else condition in C++
/*
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

*/
/*
#include<iostream>
#include<string>
using namespace std;
int main(){

    char ch;
    cout<<"Enter char: ";
    cin>>ch;
     if (ch >= 'a' && ch <= 'z'){
        cout<<"Lowercase Letter:> "<<ch<<endl;
    }else{
        cout<<"Upercase Letter:> "<<ch<<endl;
    }
    return 0;
}
*/
/*
#include<iostream>
#include<string>
using namespace std;
int main(){

    char ch;
    cout<<"Enter char: ";
    cin>>ch;
     if (ch >= 65 && ch <= 90){
        cout<<"Lowercase Letter:> "<<ch<<endl;
    }else{
        cout<<"Upercase Letter:> "<<ch<<endl;
    }
    return 0;
}
*/
/*
#include<iostream>
#include<string>
using namespace std;
int main(){

    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<< ( num >= 0 ? "Positive" : "Negative" ) <<endl; 
    return 0;
}
*/

// while loop in C++
/*
#include <iostream>
#include<string>
using namespace std;
int main(){
    int n =50;
    int count = 1;
    while( count <= n){
       // cout<<"Count is: "<<count<<endl;
       cout<<count <<" ";
       count++;
    }
       return 0;
}
*/
// for loop in C++
/*
#include <iostream>
#include<string>
using namespace std;
int main(){
    int n =10;
    for (int i= 1; i<=n; i++){
        cout<<i<<" ";
        }
    return 0;
}
*/

#include<iostream>
#include<string>
using namespace std;
int main(){
    int n =5;
    int  sum = 0;
    for (int i=1; i<=n; i++){
        cout<<i<<endl;
        sum +=i;
    }
    cout<<"Sum is: "<<sum<<endl;
    return 0;
}

