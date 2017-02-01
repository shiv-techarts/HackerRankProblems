/**
  * Shiv Pratap Singh
  * Staircase
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
    
    for(int i = 1; i <= size; i++) {
        for(int k = 0; k < (size - i); k++) {
            cout << " ";
        }
        
        for(int j = 0; j < i; j++) {
            cout << "#";
        }
        
        cout << endl;
    }
    
    return 0;
}
