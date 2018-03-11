/* Between Two Sets */
#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{ 
    while((a > 0) && (b > 0)) { 
        if (a >= b) a %= b; 
        else b %= a; 
        // cout << "GCD" << endl; 
    }
    return a + b; 
}

int lcm(int a, int b) 
{
    // cout << "LCM" << endl; 
    return ((a * b) / gcd(a, b)); 
}

int getTotalX(vector <int> a, vector <int> b) {
    int multiply = 0;
    int factor = 1; 
    int i; 
    int total = 0; 
    
    for(i =0; i<b.size(); i++) {
        multiply = gcd(multiply, b[i]); 
        // cout << "L1" << endl; 
    }

    for(i=0; i<a.size(); i++) { 
        factor = lcm(factor, a[i]);
        if(factor > multiply) return 0;
        // cout << "L2" << endl;  
    }

    if(multiply % factor != 0) return 0; 

    for(i=factor; i <= multiply; i++) {
        if((multiply % i == 0) && (i % factor == 0)) total++;
        // cout << "L3" << endl;  
    }

    // cout << total << endl; 
    return total; 
}

int main() {
    int n;
    int m;
    cin >> n >> m;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    vector<int> b(m);
    for(int b_i = 0; b_i < m; b_i++){
       cin >> b[b_i];
    }
    int total = getTotalX(a, b);
    cout << total << endl;
    return 0;
} 