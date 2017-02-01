/**
  * Shiv Pratap Singh
  * A Very Big Sum 
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
    
    int size = 0;
    cin >> size;
    
    if( size > 10 || size < 0 ) {
        return 1;
    }
    
    long limit = pow(10, 10);
    
    long* array = new long[size];
    long long sum = 0;
    
    for(int i = 0;  i < size; i++) {
        cin >> array[i];
        
        if( array[i] > limit || array[i] < 0 ) {
            return 1;
        }
           
        sum += array[i];
    }
    
    cout << sum;
    
    return 0;
}
