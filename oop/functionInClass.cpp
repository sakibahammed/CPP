#include <iostream>
using namespace std;


class Name{
    public:
    int id;
    char name[20];

    void display(){
        cout<<"Your id is : "<<id<<endl;
    }
};


class Fruit{
    public:
    char name[20];
    int weight;

};









int main(){

    Name Sakib;
    cin>>Sakib.id;
    Sakib.display();

    Fruit Mango;
    // Mango.name = "mango";
    Mango.weight = 2;


    cout<<Mango.weight<<endl;
}


