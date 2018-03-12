#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    int n, k, *list, b_charged = 0, b_actual = 0, i; 
    cin >> n >> k; 
    list = (int * ) malloc(sizeof(int) * n); 
    
    for(i=0; i<n; i++) { 
        cin >> list[i];
        if(i != k) { 
            b_actual += list[i]; 
        }
    }
    b_actual /= 2; 
    cin >> b_charged; 

    if(b_charged == b_actual) cout << "Bon Appetit" << endl; 
    else cout << (b_charged - b_actual) << endl; 
    
    return 0;
}



