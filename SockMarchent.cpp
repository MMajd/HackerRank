#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, color;
    int matching[101] = {0}; 
    int result = 0; 
    
    cin >> n;
    
    for(int i=0; i<n; i++){
        cin >> color; 
        matching[color]++; 
        if(matching[color] == 2) { 
            result++; 
            matching[color] = 0; 
        }
    }

    cout << result << endl;
    return 0;
}
