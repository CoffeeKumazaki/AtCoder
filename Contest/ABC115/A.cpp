#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>
#include <string>

using namespace std;
int main(int argc, const char * argv[]) {
    
    int d;
    cin >> d;

    cout << "Christmas ";
    for (int i=0; i<25-d; i++) {
        cout << "Eve ";
    }
    cout << endl;
    return 0;
}