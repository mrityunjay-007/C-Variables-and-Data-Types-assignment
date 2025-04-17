#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the first number: "<<endl;
    cin>>a;
    cout<<"Enter the second number: "<<endl;
    cin>>b;
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"First Number after swapping is: "<<a<<endl;
    cout<<"Second number after swapping is: "<<b<<endl;
    return 0;
}