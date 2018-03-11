#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, _type;
    cin >> n;
    vector<int> types(5);
    for(int i = 0; i < n; i++){
       cin >> _type;
       types[_type-1]++; 
    }
    int max = -1, id = -1; 
    for(int i=0; i<5; i++) { 
        if(types[i] > max) { 
            max = types[i]; 
            id = i; 
        }
    }
    cout << id + 1 << endl; 

    return 0;
}
