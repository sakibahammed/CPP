#include <iostream>
using namespace std;

class MyClass{
public:
    int summisionCLass(int x , int y){
        int m = x + y;
        return m ;
       

    }
};

int main(){

    int a , b;
    cout<<"Enter value of a & b"<<endl;
    cin>>a;
    cin>>b;

    
    MyClass myObj;
    myObj.summisionCLass(a,b);
     cout<<"summision is :"<<m<<endl;

    
    return 0;
}