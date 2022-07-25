#include <iostream>

using namespace std;


class Student{
    public:
    int id ; 
    double gpa;
};

class Name{
    private:
    string name;
    int number;
    char address[20];


};

class Age{
    public:
    int age ;
    float height;
};





int main(){
    Student Alim;
    Alim.id = 23;
    Alim.gpa = 3.121;





    Student Suborna;
    Suborna.id = 324;
    Suborna.gpa = 22.2;

    cout<<Suborna.gpa<<endl;

    cout<<Alim.id<<endl;

    Age Sakib , Nazifa;
    Sakib.age = 21;
    Sakib.height = 6.01;

    Nazifa.age = 23;
    Nazifa.height = 5.4;

    cout<< Sakib.age<<endl;

     

}