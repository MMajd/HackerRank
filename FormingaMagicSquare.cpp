#include <bits/stdc++.h>

using namespace std;


int main() {
  int magic_sqaures[8][3][3] = {
    {{8, 1, 6}, {3, 5, 7}, {4, 9, 2}},
    {{6, 1, 8}, {7, 5, 3}, {2, 9, 4}},
    {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}},
    {{2, 9, 4}, {7, 5, 3}, {6, 1, 8}}, 
    {{8, 3, 4}, {1, 5, 9}, {6, 7, 2}}, 
    {{4, 3, 8}, {9, 5, 1}, {2, 7, 6}}, 
    {{6, 7, 2}, {1, 5, 9}, {8, 3, 4}}, 
    {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}},  
  };

  int A[3][3];
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++)
      scanf("%d", &A[i][j]);
  }

  int min_cost = 81 // 81: is the most cost could happen in any matrix not only magic squares
  int instant_cost; 
  for(int k=0; k<8; k++) { 
    instant_cost = 0; 
    
    for(int i=0; i<3; i++) { 
      for(int j=0; j<3; j++) { 
        instant_cost += abs(A[i][j] - magic_sqaures[k][i][j]); 
      }
    }
    if(instant_cost < min_cost) { 
      min_cost = instant_cost; 
    }
  }

  return 0;
}