/**
  * Shiv Pratap Singh
  * Divisible Sum Pairs
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

    int n, k, count = 0;
    cin >> n >> k;

    int array[n] = {0};
    for(int i = 0; i < n; i++) {
        cin >> array[i];
    }

    for(int i = 0; i < n; i++) {
        for(int j = (i + 1); j < n; j++) {
            if( (array[i] + array[j]) % k == 0) {
                count++;
            }
        }
    }

    cout << count;

    return 0;
}

