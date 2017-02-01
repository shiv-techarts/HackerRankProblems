/**
  * Shiv Pratap Singh
  * Diagonal Difference
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
    
    int** matrix = new int*[size];
    for(int i = 0; i < size; ++i)
      matrix[i] = new int[size];
      
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            cin >> matrix[i][j];
        }
    }  
    
    int sumLeftDiag = 0;
    int sumRightDiag = 0;
    
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            if(i == j) {
                sumLeftDiag += matrix[i][j];  
            }
            if(j == ( (size - 1) - i )) {
                sumRightDiag += matrix[i][j];
            }
        }
    }

    cout << abs( (sumLeftDiag - sumRightDiag) );

    return 0;
}
