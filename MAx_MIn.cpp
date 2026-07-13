// Problem: Write a program to find the maximum and minimum values present in a given array of integers.

// Input:
// - First line: integer n
// - Second line: n integers

// Output:
// - Print the maximum and minimum elements

// Example:
// Input:
// 6
// 3 5 1 9 2 8

// Output:
// Max: 9
// Min: 1
#include<iostream>
#include<climits>
using namespace std;
int minvalue(int arr[], int n){
    int min=INT_MAX;
    for(int i=0; i<n; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"min element in array:"<<min<<endl;
}
int maxvalue (int arr[], int n){
      int max=INT_MIN;
      for(int i=0; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
      }
      cout<<"max element in array:"<<max<<endl;
}
int main(){
    cout<<"enter a  number for array:"<<endl;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    maxvalue(arr,n);
    minvalue(arr,n);

}
