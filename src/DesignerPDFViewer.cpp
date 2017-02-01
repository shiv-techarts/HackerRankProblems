/**
  * Shiv Pratap Singh
  * Designer PDF Viewer
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

    int arrayOfHeight[26] = {0};
    for(int i = 0; i < 26; i++) {
        cin >> arrayOfHeight[i];
    }

    string str;
    cin >> str;

    int length = str.size();
    int max = -1;

    for(int i = 0; i < length; i++) {
        int character = arrayOfHeight[ (str[i] - 97) ];
        if( character > max) {
            max = character;
        }
    }

    cout << (max * length);

    return 0;
}

