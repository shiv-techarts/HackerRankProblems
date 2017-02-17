/**
  * Shiv Pratap Singh
  * Compare the Triplets
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
    
    int arrayA[3] = {0};
    int arrayB[3] = {0};
    int pointsA = 0;
    int pointsB = 0;
    
    for(int i = 0; i < 3; ++i) {
        cin >> arrayA[i];
    }
    
    for(int i = 0; i < 3; ++i) {
        cin >> arrayB[i];
    }
    
    for(int i = 0; i < 3; ++i) {
        if(arrayA[i] > arrayB[i]) {
            pointsA++;
        } else if(arrayA[i] < arrayB[i]) {
            pointsB++;
        }
    }
    
    cout << pointsA << " " << pointsB;
    
    return 0;
}
