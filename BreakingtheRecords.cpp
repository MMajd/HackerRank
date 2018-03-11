#include <bits/stdc++.h>

using namespace std;

vector <int> breakingRecords(vector <int> score) {
    int most = score[0], least = score[0];
    int mct = 0, lct = 0; 
    
    for(int i=1; i<score.size(); i++) { 
        if(score[i] > most) { 
            most = score[i]; 
            mct++; 
        }
        else if(score[i] < least) {
            least = score[i]; 
            lct++; 
        }
    }
    vector<int> res = {mct, lct}; 
    return res; 
}

int main() {
    int n;
    cin >> n;
    vector<int> score(n);
    for(int score_i = 0; score_i < n; score_i++){
       cin >> score[score_i];
    }
    vector <int> result = breakingRecords(score);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;


    return 0;
}
