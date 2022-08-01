#include <iostream>
using namespace std;

int main(){
    int m = 10;
    int &j = m;
    j = 9;
    cout<<m<<endl;
}