/**
  * Shiv Pratap Singh
  * Circular Array Rotation
  *
  */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <list>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // TODO

    list<int> array;

    int sizeOfArray, query, rotations;
    int values;

    cin >> sizeOfArray >> rotations >> query;

    for(int i = 0; i < sizeOfArray; i++) {
        cin >> values;
        array.push_back(values);
    }

    for(int i = 0; i < rotations; i++) {
            array.push_front(array.back());
            array.pop_back();
    }

    vector<int> intArray;
    copy(array.begin(), array.end(), back_inserter(intArray));

    for(int i = 0; i < query; i++) {
        cin >> values;
        cout << intArray[values] << endl;
    }

    return 0;
}

