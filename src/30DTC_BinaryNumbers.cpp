/**
  * Shiv Pratap Singh
  * 30 Days TO Code - Binary Numbers
  *
  */
  
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    unsigned int n;
    cin >> n;

    int max = 0;
    int count = 0;

    while(n != 0) {

        count = ((n & 1) == 0) ? 0 : count + 1;
        n = n >> 1;
        if(count > max){
            max = count;
        }
    }

    cout << max;

    return 0;
}
