#include <bits/stdc++.h>

using namespace std;

bool leapYear(int y) { 
    return ((y <= 1917 && y % 4 == 0)
    || (y >= 1919 && (y % 400 == 0 || (y % 100 != 0 && y % 4 == 0)))); 
}

int main() {  
    int daysInMonth[] = {31, 0, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
    int year;
    cin >> year;

    if(year == 1918) {
        daysInMonth[1] = 15; 
    }
    else if (leapYear(year)) { 
        daysInMonth[1] = 29; 
    }
    else { 
        daysInMonth[1] = 28; 
    }
    
    int remainingDays = 256; 
    int i, month = 0; 
    
    for(i=0; i < 12; i++) {
        remainingDays -= daysInMonth[i]; 
        month++; 
        if(remainingDays <= daysInMonth[month]) 
        {
            month++; 
            break; 
        }  
    }
    printf("%02d.%02d.%04d\n", remainingDays, month, year);  
    return 0;
}
