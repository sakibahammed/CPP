#include <iostream>
using namespace std;


int main(){
    int numberOfGrades;
    cout<<"Enter numbers of grade"<<endl;
    cin>>numberOfGrades;


    int *grades;
    grades = new int [numberOfGrades];
    for(int i=0;i<numberOfGrades;i++){
        // cout<<i<<". Grade = ";
        cin>>grades [i];

    }
    for(int j=0;j<numberOfGrades;j++){
        cout<<"Grades : "<<grades[j]<<endl;
    }
    delete [] grades;
    grades = NULL;
}