#include <iostream>
using namespace std;

void addition(int i , int j){
    int sum = i+j;
    cout<<sum<<endl;
}

void substraction(int i , int j){
    int sub = i-j;
    cout<<sub<<endl;
}


void multiplication(int i, int j){
    int mult = i*j;
    cout<<mult<<endl;
}

int main(){

    int a , b;
    cin>>a>>b;

    addition(a,b);
    multiplication(a,b);

     
}