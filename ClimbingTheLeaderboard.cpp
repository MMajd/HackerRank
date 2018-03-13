#include <bits/stdc++.h>

using namespace std;


int main() {
    // n no. of player and their scores at final stage 
    // m no. of alice scores up to final stage 
    // ranks represent each player except alice's at the final stage of the game 
    int n, m, *scores, *ranks, alice, i; 
    cin >> n; 
    scores = (int *) malloc(sizeof(int) * n); 
    ranks = (int *) malloc(sizeof(int) * n); 

    for(i=0; i<n; i++) { 
        cin >> scores[i]; 
    }
    ranks[0] = 1; 
    for(i=1; i<n; i++) { 
        if(scores[i] < scores[i -1]) ranks[i] = ranks[i -1] + 1; 
        else ranks[i] = ranks[i -1]; 
    }

    int first, last, mid, alice_rank;

    cin >> m; 

    for(i=0; i<m; i++) { 
        cin >> alice; 
        
        first = 0; 
        last = n -1;

        alice_rank = 1; 

        /* 
        Note here that the array of scores is in descending order (ie sorted from the 
        higher to lower) 
        so we reversed the logic in ordinary binary search 
        complexity: m * log(n) average case senario m * n worst case 
        */
        while(first <= last) { 
            mid = (first + last) / 2;
            if(scores[mid] == alice) {
                alice_rank = ranks[mid];  
                break; 
            } 
            else if(alice < scores[mid]) { 
                first = mid + 1; 
                alice_rank = ranks[mid] + 1; 
            } else { 
                last = mid - 1; 
            }
        }

        cout << alice_rank << endl; 
    }

    return 0;
}


