#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int num1 , num2;
    cout<<"Enter 2 number"<<endl;
    cin>>num1>>num2;
    cout<<setprecision(12);
    cout<<"Your number is "<<(float)num1 / num2<<endl;
}