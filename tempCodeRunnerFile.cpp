#include<iostream>
#include <vector>
using namespace std;        
int main() {
    int p;
    cin >> p;

    vector<int> logp(p);
    for (int i = 0; i < p; i++)
        cin >> logp[i];

    int q;
    cin >> q;

    vector<int> logq(q);
    for (int i = 0; i < q; i++)
        cin >> logq[i];

    vector<int> merged;

    int i = 0, j = 0;

    while (i < p && j < q) {
        if (logp[i] <= logq[j])
            merged.push_back(logp[i++]);
        else
            merged.push_back(logq[j++]);
    }
    while (i < p){
        merged.push_back(logp[i++]);
    }
    while (j < q){
        merged.push_back(logq[j++]);
    }  

    for (int x : merged)
        cout << x << " ";

    return 0;
}