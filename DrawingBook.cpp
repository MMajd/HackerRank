#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, p, fornt, back; 
    cin >> n >> p; 
    
    fornt = p / 2; // eg: n = 6, p = 4,  back = 4/2 = 2 
    back = n / 2 - p / 2; // eg: n = 6, p = 4,  fornt = 3 - 4/2 = 3 -2 = 1 
    
    if (fornt > back) cout << back; 
    else cout << fornt; 
    
    return 0; 
}