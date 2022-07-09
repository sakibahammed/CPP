#include <iostream>
#include <string>
using namespace std;


class BuckeysClass {
    public:

    BuckeysClass(string z){
        setName(z);
    }
    void setName(string x){
        name = x;
    }
    string getName(){
        return name;
    }
   private:
   string name;
};

int main(){
    BuckeysClass bo("Lucky Bucky roberts");
    cout<< bo.getName();

    BuckeysClass bo2("Sally make solid");
    cout<<bo2.getName();

    return 0;
}