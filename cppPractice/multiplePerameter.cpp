#include <iostream>
using namespace std;

int addNumbers(int x , int y){
    int m = x+y;
    return m;
}


int main(){
    int a , b;
    cin>>a;
    cin>>b;
     
     cout<<addNumbers(a,b)<<endl;

     int f,g;
     cout<<"Enter the value of first number"<<endl;
     cin>>f;
     cout<<"Enter the value of second number"<<endl;
     cin>>g;

     cout<<addNumbers(f,g)<<endl;




    return 0;
}


