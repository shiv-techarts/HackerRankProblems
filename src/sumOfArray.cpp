/**
  * Shiv Pratap Singh
  * Simple Array Sum
  *
  */
  
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int size = 0;
    
    cin >> size;
    
    // Allocating size of array
    int* array = new int[size];
    int sum = 0;
    
    // Taking input and finding the sum
    for(int i = 0; i < size; i++) {
        cin >> array[i];
        sum += array[i];
    }
   
    // Printing the sum
    cout << sum;
    
    return 0;
}

