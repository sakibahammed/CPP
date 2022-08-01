#include <iostream>
using namespace std;
int main(){
    int rows,  columns , i , j;
    int **matrix;

    cin>>rows>>columns;
    
    matrix = new int *[rows];
    for(i = 0;i<rows;i++){
        matrix[i] = new int[columns];
    }
    for(i = 0;i<rows;i++){
        for(j=0;j<columns;j++){
            cin>>matrix[i][j];
        }
    }

    for(i = 0;i<rows;i++){
        for(j=0;j<columns;j++){
            cout<<matrix[i][j]<<endl;
        }
        cout<<" "<<endl;
    }


    for(i=0;i<rows;i++){
        delete [] matrix[i];
        delete []matrix;
    }

}