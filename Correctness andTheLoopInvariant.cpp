#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; 
    vector<int> arr(n);
    
    for(auto &it: arr)
        cin >> it;
    
    sort(arr.begin(), arr.end());
    
    for(auto &i: arr)
        cout << i << " ";
    
    return 0;
}
