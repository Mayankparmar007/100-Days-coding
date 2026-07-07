// Problem: Read a string and check if it is a palindrome using two-pointer comparison.

// Input:
// - Single line: string s

// Output:
// - Print YES if palindrome, otherwise NO

// Example:
// Input:
// level

// Output:
// YES

// Explanation: String reads same forwards and backwards
#include<iostream>
using namespace std;
 void palindrome(string s){
    int right=0;
    int left=s.size()-1;
    while(left>right){
        if(s[left]!=s[right]){
            cout<<"no";
            return ;
        }
        
        left--;
        right++;
   
    } cout<<"yes";
    
  
     
 }
int main(){

    string s;
    cin>>s;
    palindrome(s);
    return 0;
}