#include <iostream>
#include <chrono>
 
using namespace std;

int main(int argc, char** argv){
    auto start = chrono::steady_clock::now();

    system(argv[1]);
    
    auto end = chrono::steady_clock::now();
    auto diff = end - start;
    
    cout << endl;
    cout << endl;
    
    cout << "Time: " << chrono::duration <double, milli> (diff).count() << " ms" << endl;

    return 0;    
}
