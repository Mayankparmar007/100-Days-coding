// Problem: Given an array of integers, count the frequency of each distinct element and print the result.

// Input:
// - First line: integer n (size of array)
// - Second line: n integers

// Output:
// - Print each element followed by its frequency in the format element:count

// Example:
// Input:
// 5
// 1 2 2 3 1

// Output:
// 1:2 2:2 3:1
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
int n;
cin>>n;
vector<int> nums(n);
for(int i=0; i<n; i++){
    cin>>nums[i];
}
 unordered_map<int, int> freq;
 vector<int> order;
 for(int i=0; i<n; i++){
    if(freq.count(nums[i])==0){
        order.push_back(nums[i]);
    }
     freq[nums[i]]++;
 }
 for(int i=0;i<order.size(); i++){
    cout<<order[i]<<":"<<freq[order[i]]<<" ";
    if(i<order.size()-1){
        cout<< " ";
    }
    
 }



    return 0;
}