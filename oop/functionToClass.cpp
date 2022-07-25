#include <iostream>
using namespace std;

class Student{
    public:
    int id;
    double gpa;


    void display(){
        cout<<"Your gpa is "<<gpa<<endl;
    }
};

int main(){
    Student Alim;
    Alim.id = 101;
    Alim.gpa = 3.234; 
    Alim.display(); 
}