#include <iostream>
using namespace std;
int main(){
    int n, m ;
    char o;
    cout<< "enter 2 number";
    cin>> n>>m;
    cout << "enter operator";
    cin>>o;

    switch (o)
    {
    case '+':
        cout<<n+m;
        break;
    case '-':
    cout<<n-m;
    break;
    case '*':
    cout<<n*m;
    default:
        break;
    }

    return 0;
    
}