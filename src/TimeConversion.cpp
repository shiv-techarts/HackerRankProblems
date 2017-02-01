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
    
    //int i = 0;
    
    //int hour = stoi(normalFormat.substr(2));
    
    int hour = 0;
    
    bool isDay = normalFormat.substr(8, 2) == "PM" ? true : false;
    
    if(isDay) {
        hour += 12;    
    } else if(hour == 12) {
        hour = 0;
    }
    
    cout << hour << normalFormat;

    return 0;
}
