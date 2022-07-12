#include <iostream>
using namespace std;

int main(){
    string name[4] = {"saklain", "wasim","alkram","wakar"};

    for(int i = 0 ; i<4;i++){
        cout<<name[i]<<endl;
    }

    int marks[4];
    for(int i = 0;i<4;i++){
        cin>>marks[i];
    }
    for(int i = 0;i<4;i++){
        cout<<marks[i];
    }
}