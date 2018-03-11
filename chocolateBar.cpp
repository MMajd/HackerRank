#include <bits/stdc++.h>

using namespace std;

int solve(int n, vector < int > s, int d, int m){
    // n-sqaures, s values on these sqaures, lily is has m month and d day 
    int i,j,sum,total=0;
    for(i=0;i<=n-m;i++)
    {
        sum=0;
        for(j=i;j<m+i;j++)
        {
            sum=sum+s[j];
        }
        if(sum == d) total++;
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    int d;
    int m;
    cin >> d >> m;
    int result = solve(n, s, d, m);
    cout << result << endl;
    return 0;
}
