#include <bits/stdc++.h> 

using namespace std; 

int main() {
    /*
    Algo: we indicate that we have passed over a valley of we have 
    stepped down as much as we have stepped up and the previous step is to up not down 
    if the previous step was to down that means that we have passed over a mountain 
    NOTE : a valley could have small mountains 
    _/\      _   (UDDDUDUU)
       \    /
        \/\/
    if have hight of 0 means that we on see level 
    */ 

    int nsteps, ud = 0, valleys = 0; 
    char step; 
    cin >> nsteps; 
    for(int i=0; i<nsteps; i++) { 
        cin>>step; 
        if(step == 'U') ud++; 
        else ud--; 
        if(ud == 0 && step == 'U') valleys++; 
    }
    cout << valleys << endl; 
    return 0; 
}