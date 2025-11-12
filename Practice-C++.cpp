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
/*
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
*/
/*
#include<iostream>
#include<string>
using namespace std;
int main(){
    int n =10;
    int  find = 0;
    int sum= 0;
    for (int i=1; i<=n; i++){
        if (i % 2 !=0 ){
            cout<<i<<" is even number"<<endl;
            sum= i+i;
        }else {
            cout<<i<<"is odd number"<<endl;
        }
    }
    cout<<"Sum is: " <<sum<<endl;
        return 0;
}
*/
/*
#include<iostream>
#include<string>
using namespace std;
int main(){
    int n =10;
   // int  find = 0;
    int oddSum= 0;
    for (int i=1; i<=n; i++){
        if (i % 2 !=0 ){
            cout<<i<<" is odd number"<<endl;
            oddSum= i+i;
        }
    }
    cout<<"Sum is Odd Number: " <<oddSum<<endl;
        return 0;
}
*/

/*
#include<iostream>
#include<string>
using namespace std;
int main(){

    int n=10;
    int evenSum=0;
    int i =1;

    while (i<=n){
        if (i %2 ==0){
            cout<<i<<" is Even number"<<endl;
            evenSum +=i;    
        }
        i++;
    }
    cout<<"Sum is Even Number: "<<evenSum<<endl;

    return 0;
}
*/
/*
#include<iostream>
#include<string>
using namespace std;
int main (){
    int n=10;
    int evenSum=0;
    for (int i=1; i<=n; i++){
        if (i%2 == 0){
            cout<<i<<" is even number. "<<endl;
        evenSum +=i; 
        } 
    }
       cout<<"Sum is Even Number: "<<evenSum<<endl;
    return 0;
}
*/
/*
#include<iostream>
#include<string>
using namespace std;
int main(){

    int n=11;
    bool isPrime = true;
    for (int i=2; i*i <=n; i++){     // for (int i=2; i<=n-1; i++)
        if (n % i == 0){
            isPrime = false;
            break;
        }
    }
    if (isPrime == true){
        cout<<"Prime number"<<endl;
    }else{
        cout<<"Non Prime number"<<endl;
    }

    return 0;
}
*/
/*
#include<iostream>
#include<string>
using namespace std;
int main(){
    int c;
    cout<<"Enter any one Number: ";
    cin>>c;
    for (int i=1; i<=c; i++){
        int r = 10;
        for (int i=1; i<=r; i++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
*/
// sum of all numbers from 1 to n which are divisible by 3.
/*
#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int sum=0;
    for (int i=1; i<=n; i++){
        if (i %3 == 0){
            cout<<i<<" is divisible by 3 "<<endl;
            sum +=i;
        }
    }
    cout<<"Sum is: "<<sum<<endl;
}
*/
/*
#include<iostream>
#include<string>
using namespace std;
int main(){

    int n=5;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            cout<<"H" <<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/
/*
#include<iostream>
#include<string>
using namespace std;
int main(){
    // 1st Question
    int n=5;
    for (int i=0; i<=n-1; i++){
        for (int j=0; j<=n-1; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}
*/
/*
#include<iostream>
#include<string>
using namespace std;
int main (){

    int n=26;
    for (int i=0; i<n; i++){
        char ch='A';
        for (int j=0; j<n; j++){
            cout<<ch<<" ";
            ch++;
        } 
        cout<<endl;
   }
       return 0;
}
*/
/*
#include<iostream>
#include<string>
using namespace std;
int main(){
    // 2nd Question
    
    int n=5;
    int num=1;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout<<num <<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}
*/
/*
#include<iostream>
#include<string>
using namespace std;
int main(){
    int n=5;
    char ch='A';
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout<<ch<< " ";
            ch++;
        }
        cout<<endl;
    }
    return 0;
}
*/
/*
#include<iostream>
#include<string>
using namespace std;
int main(){ 

    int n=4;
    
    for (int i=0; i<n; i++){
        for (int j=0; j<i+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
*/
/*
#include<iostream>
#include<string>
using namespace std;
int main(){

    int n=10;
    
    for (int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<i+1;
        }
        cout<<endl;
    }
    return 0;
}
*/

/*
#include<iostream>
#include<string>
using namespace std;
int main(){

    int n=5;
    
    for (int i=0; i<n; i++){
        char ch='A';
        for(int j=0; j<i+1; j++){
            cout<<ch<<i+1<<" ";
            ch++;
        }
        cout<<endl;
    }
    return 0;
}
*/
/*
#include<iostream>
#include<string>
using namespace std;
int main(){
    
    int n=5;
    for(int i=0; i<n; i++){
        for (int j=0; j<=i; j++){
            cout<<char ('A'+i);
        }
        cout<<endl;
    }

    return 0;
}
*/    
/*
#include<iostream>
#include<string>
using namespace std;
int main(){

    int n=5;
    
    for (int i=0; i<n; i++){
        int num=1;
        for(int j=0; j<i+1; j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}
*/
/*
#include<iostream>
#include<string>
using namespace std;
int main(){ 

    // for (int i=0; i<5; i++){
    //     for (int j=i+1; j>0; j--){
    //         cout<<j<<" ";
    //   }
    //     cout<<endl;
    // }


    // for (int i=1; i<5; i++){
    //     for (int j=i; j>=1; j--){
    //         cout<<j<< " ";
    //     }
    //     cout<<endl;
    // }

    // for (int i=1; i<=5; i++){
    //     for ( int j=1; j<=i; j++){
    //         cout<<i-j+1<<" ";
    //     }
    //     cout<<endl;
    // }
   
    
    return 0;
}

*/
/*
#include<iostream>
#include<string>
using namespace std;
int main(){

     int num=1;
    for (int i=0; i<5; i++){
        
        for (int j=i+1; j>0; j--){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }

    return 0;
}
*/
/*
#include<iostream>
#include<string>
using namespace std;
int main(){

        int n=4;
        char ch='A';
        for (int i=0; i<n; i++){
            for (int j=i+1; j>0; j--){
                cout<<ch <<" ";
                ch++;
            }
            cout<<endl;
        }        


    return 0;
}
*/
/*
#include<iostream>
#include<string>
using namespace std;
int main(){

    int n=4;
    for (int i=0; i<n; i++){
        for (int j=i ; j>=0; j--){
            cout<<char ('A'+j)<< " ";
        }
        cout<<endl;
    }

    return 0;
}
*/
/*
#include<iostream>
#include<string>
using namespace std;
int main(){

   string name[0];
   for (string n: name){
    cout<<"Enter name: ";
    cin>>n;
   }
    return 0;
}
*/
/*
#include<iostream>
#include<string>
using namespace std;
int main(){
    
    int num[]= {5,15, 22,1,-15,-24};
    int size = 6;
    int smallest= INT8_MAX;
    int largest =  INT8_MIN;
    int idx= 0;
    for (int i=0; i<size; i++){
        // if (num[i]< smallest){
        //     smallest = num[i];
        // }
        smallest= min(num[i], smallest);
        largest = max(num[i], largest);
        
}
cout<<"smallest: " <<smallest<<endl;
cout<<"Largest: " <<largest<<endl;
cout<<idx<<endl;
    return 0;
}
*/
/*
#include<iostream>
#include<string>
using namespace std;
int main (){

    int num[5]= {10,45,3,98,32};
    int smallest= num[0];
    int largest= num[0];
    int minIdx= 0;
    int maxIdx = 0;
    for (int i=0; i<5; i++){
        if (num[i]< smallest){
            smallest = num[i];
            minIdx= i;
        }
        if(num[i] > largest ){
            largest = num[i];
            maxIdx = i;
        }
    }
    cout<<"smallest number: "<<smallest<<" at index "<<minIdx<<endl;
    cout<<"Largest number: "<<largest<<" at index "<<maxIdx<<endl;
    return 0;
}
*/

/*
#include<iostream>
#include<string>
using namespace std;

int linearsearch(int arr[], int size, int target){
    for (int i=0; i<size; i++){
        if (arr[i] == target){
            return i;
        }
    }
    return -1;
}
int main (){
    int arr[] = {4,1,5,12,78,34,3};
    int size= 6;
    int target = 34;
    cout<<"Element Index is : "<<linearsearch(arr,size,target);
    return 0;
}
*/

#include<iostream>
#include<string>
using namespace std;
void reverseArray(int arr[], int size){
    int start= 0, end = size-1;
    while (start < end){
       swap ( arr[start],arr[end] );
       start++;
       end--;
    }
}
int main(){

    int arr[] = {4,2,7,8,1,2,5};
    int sz = 7;
    reverseArray(arr,sz);
    for (int i=0; i<sz; i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    return 0;
}

