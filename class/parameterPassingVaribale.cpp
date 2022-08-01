#include <iostream>
using namespace std;
//just swap this to variables using pointer and passing ref value using ref ;;

void swap(int *a , int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}





int main(){
    int *grades = NULL;
int numberOfGrades;
cout << "Enter the number of grades: ";
cin >> numberOfGrades;
grades = new int[numberOfGrades];
for (int i = 0; i < numberOfGrades; i++)
   cin >> grades[i];
for (int j = 0; j < numberOfGrades; j++)
      cout << grades[j] << " ";
delete [] grades;
grades = NULL;

cout<<grades<<endl;



}