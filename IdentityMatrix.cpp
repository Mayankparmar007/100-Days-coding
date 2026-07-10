// Problem: Write a program to check whether a given square matrix is an Identity Matrix. An identity matrix is a square matrix in which all diagonal elements are 1 and all non-diagonal elements are 0.

// Input:
// - First line: integer n representing number of rows and columns
// - Next n lines: n integers each representing the matrix elements

// Output:
// - Print "Identity Matrix" if the matrix satisfies the condition
// - Otherwise, print "Not an Identity Matrix"

// Example:
// Input:
// 3
// 1 0 0
// 0 1 0
// 0 0 1

// Output:
// Identity Matrix
#include<iostream>
using namespace std;
int main(){
    int r,c;
    cin>>r>>c;
    int matrix[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>matrix[i][j];
        }
    }
    bool identy=true;
    for(int i=0;i<r;i++){
        for(int j=0;j<c; j++){
            if(i==j && matrix[i][j]!=1){
                identy=false;
                break;
            }
            else if(i!=j && matrix[i][j]!=0){
                identy=false;
                break;
            }
        }
    }
    if(identy){
        cout<<"Identity Matrix";
    }
    else{
        cout<<"Not an Identity Matrix";
    }
    return 0;
}