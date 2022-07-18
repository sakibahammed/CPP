#include <iostream>
using namespace std;

void display(int *number){
    *number = 40;
}




int main(){
    int x = 30;

    cout<<"Value of x is ="<<" "<<x<<endl;


    display(&x);
    cout<<"Value of x is ="<<" "<<x<<endl;


}