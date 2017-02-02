/**
  * Shiv Pratap Singh
  * Kangaroo
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

    //const int limit = 10000;
    double x1, x2, v1, v2;

    cin >> x1 >> v1 >> x2 >> v2;

    if(v2 > v1 || x2 < x1) {
        cout << "NO";
        return 0;
    }

    int cond1 = static_cast<int>( x2 - x1 );
    int cond2 = static_cast<int>( v2 - v1 );

    if(cond2) {
        if (! (  cond1 % cond2 ) ) {
            cout << "YES";
        } else {
            cout << "NO";
        }
    } else {
        cout << "NO";
    }

    return 0;
}

