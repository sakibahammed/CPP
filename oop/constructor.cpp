#include <iostream>
using namespace std;


class Student{
    public:
    int id;
    double cgpa;

    void display(){
        cout<<"Your id is : "<< id << " and gpa"<<cgpa<<endl;

    }
    Student(int x , double y ){
        id = x ; 
        cgpa = y;
    }
    Student(){
        cout<<"This is DEfault constructor"<<endl;
    }

};


int main(){
    Student sakib(1,1.45);
    Student nazifa(23,3.45);
    sakib.display();
    nazifa.display();



    Student ob; // ekhane ob er kono perameter na thakai shey default constructor k call korce...

    





}







