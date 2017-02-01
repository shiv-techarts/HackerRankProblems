/**
  * Shiv Pratap Singh
  * Plus Minus
  *
  */
  
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // TODO
    
    int size;
    cin >> size;
    
    int value = 0;
    float countPositve = 0.0f;
    float countNegative = 0.0f;
    float countZero = 0.0f;
    
    for(int i = 0; i < size; i++) {
        cin >> value;
        
        if(value < 0) {
            countNegative++;    
        } else if(value > 0) {
            countPositve++;
        } else {
            countZero++;
        }
    }
    
    printf( "%.6f\n%.6f\n%.6f", countPositve / size, countNegative / size, countZero / size );
    
    return 0;
}
