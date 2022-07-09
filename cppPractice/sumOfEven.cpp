#include <iostream>
using namespace std;


int main(){
    int n=10 , sum = 0;

    int i = 2;
    while(i<=n){
        // i+=2;
        sum = sum + i;
        i = i+2;
    }
    cout<<sum<<endl;
}