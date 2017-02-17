/**
  * Shiv Pratap Singh
  * Mini-Max Sum
  *
  */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <limits>
#include <algorithm>

using namespace std;

int main() {
    // TODO

    long array[5] = {0};
    for(int i = 0; i < 5; i++) {
        cin >> array[i];
    }

    long long minSum = INTMAX_MAX;
    long long maxSum = 0;


    for(int i = 0; i < 5; i++) {
        long long temp = 0;
        for(int j = 0; j < 5; j++) {
            if(i != j)
                temp += array[j];
        }

        if(temp < minSum) {
            minSum = temp;
        }
        if(temp > maxSum) {
            maxSum = temp;
        }
    }

    cout << minSum << " " << maxSum;

    return 0;
}

