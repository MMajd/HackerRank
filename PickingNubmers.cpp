/* 
	EXPL: https://dev.to/ryhenness/lets-solve-code-challenge---picking-numbers-a32
*/ 

#include <bits/stdc++.h> 

int main() { 
	int n, *arr, *map, i, max; 
	cin >> n; 
	arr = (int *) malloc(sizeof(int) * n); 
	map = (int *) malloc(sizeof(int) * n); 

	for(i=0; i<n; i++) { 
		cin >> arr[i]; 
		map[arr[i]]++; 
	}

	max = 0; 
	for(i=0; i<(n-1); i++) { 
		int t = map[i] + map[i + 1]; 
		if(t > max) max = t; 
	}
	cout << max << endl; 
	return 0; 
}