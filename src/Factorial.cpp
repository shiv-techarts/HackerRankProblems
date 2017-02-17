/**
  * Shiv Pratap Singh
  * Factorial - 30 Days To Code
  *
  */
  
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

long long factorial(int N) {
    if(N == 1) {
        return 1;
    } else {
        return N * factorial(N - 1);
    }
}

int main() {
    // TODO
    
    int number;
    cin >> number;
    long long result = factorial(number);
    cout << result;
    
    return 0;
}
