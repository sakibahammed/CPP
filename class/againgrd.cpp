#include <iostream>
using namespace std;

int main()
{
    /* code */
    int numberOfGrades;
    cout<<"Enter your number of Grades"<<endl;
    cin>>numberOfGrades;
    int *grades;
    grades = new int[numberOfGrades];

    for(int i =0;i<numberOfGrades;i++){
        cin>>grades[i];
    }
    for(int j = 0;j<numberOfGrades;j++){
        cout<<grades[j]<<" ";
    }

    delete [] grades;
    grades = NULL;


    return 0;
}
