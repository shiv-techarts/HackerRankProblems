/**
  * Shiv Pratap Singh
  * Apple and Orange
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

    int s, t, a, b, m, n;
    cin >> s >> t >> a >> b >> m >> n;

    int apples = 0;
    int oranges = 0;
    int values;

    for(int i = 0; i < m; i++) {
        cin >> values;
        if( ( ( a + values ) >= s ) && ( ( a + values ) <= t ) ) {
            apples++;
        }
    }

    values = 0;

    for(int i = 0; i < n; i++) {
        cin >> values;
        if( ( ( b + values ) <= t ) && ( ( b + values ) >= s ) ) {
            oranges++;
        }
    }

    cout << apples << "\n" << oranges;

    return 0;
}

