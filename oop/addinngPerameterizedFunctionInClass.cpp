#include <iostream>

using namespace std;

class Student{
    public:
    int id;
    double gpa;


    void display(){ 
        cout<< id << " " <<gpa<<endl;
    }

    void setValue(int x , double y){
        id = x;
        gpa = y; 
    }

};




int main(){

    Student sakib,nazifa,ador;
    sakib.setValue(1,423.21);
    sakib.display();





    nazifa.setValue(23,2.31);
    nazifa.display();

    ador.setValue(12,3.12);
    ador.display();

}