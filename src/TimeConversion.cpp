/**
  * Shiv Pratap Singh
  * Time Conversion
  *
  */

// 11:45:05PM -- string
// 23:45:05 -- string
  
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    // TODO
    
    string normalFormat;
    cin >> normalFormat;
    
    string hr = normalFormat.substr(0, 2);
    int hour = stoi(hr);
       
    bool isDay = normalFormat.substr(8, 2) == "PM" ? true : false;
    
    if(isDay) {
        if(hour != 12) {
            hour += 12;
        }    
    } else if ( hour == 12 ) {
        hour = 0;        
    }
    
    if(hour < 10) {
        hr = "0" + to_string(hour) + normalFormat.substr(2, 6);
    } else {
        hr = to_string(hour) + normalFormat.substr(2, 6);
    }
    
    cout << hr;

    return 0;
}
