#include <iostream>
 
using namespace std;

int main(){

    int n,sum=0;

    cout<<"Enter Number of Students"<<endl;
    cin>>n;

    int students[n];

    for(int  i = 0;i<n;i++){
        cout<<"Marks for student " << i+1<< " : ";
        cin>>students[i];
        sum =  sum + students[i];
    }


    cout << " total marks : "<<sum<<endl;
    float avg = (float)sum/n;
    cout << " avg : "<<avg<<endl;


    int max = students[0];
    int min = students[0];
    for(int i=1;i<n;i++){
        if(max<students[i]){
            max = students[i];
        }
        if(min>students[i]){
            min = students[i];
        }
        

    }

    cout<<"Maximum number is : "<<max<<endl;
    cout<<"Minimum number is : "<<min<<endl;
    return 0 ;
}