#include <iostream>
using namespace std;


void sum(int x , int y){
    int add = x + y;
    cout<<add<<endl;
}
void sum(int x , int y , int z){
    int sum =  x+y+z;
    cout<<sum<<endl;
}


int main(){
    sum(1,2);
    sum(1,2,4);
}