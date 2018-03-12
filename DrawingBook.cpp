#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, p, fornt, back; 
    cin >> n >> p; 
    
    back = p / 2; 
    fornt = n / 2 - p / 2; 
    
    if (fornt > back) cout << back; 
    else cout << fornt; 
    
    return 0; 
}