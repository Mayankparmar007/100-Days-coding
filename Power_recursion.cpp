// Problem: Given integers a and b, compute a^b using recursion without using pow() function.

// Input:
// - Two space-separated integers a and b

// Output:
// - Print a raised to power b

// Example:
// Input:
// 2 5

// Output:
// 32

// Explanation: 2^5 = 2 * 2 * 2 * 2 * 2 = 32


#include<iostream>
using namespace std;

long long pow(int a, int b){
    if(b==0) return 1;
    if(b==1) return a;
    else{
        return pow(a,b-1)*a;
    }
    
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<pow(a,b);
    return 0;
}