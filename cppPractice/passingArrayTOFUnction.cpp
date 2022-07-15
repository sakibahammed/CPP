#include <iostream>
using namespace std;

void displayArray(int num[] , int size){
    for(int i = 0;i<size;i++){
        cout<<num[i]<<" ";
    } 
}




int main(){
    int number[5];
    for(int i = 0;i<5;i++){
        cin>>number[i];
    }

   displayArray(number , 5);


}