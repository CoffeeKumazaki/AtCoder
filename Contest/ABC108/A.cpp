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
    
    int k;
    cin >> k;

    cout << (k/2)*(k/2+k%2) << endl;
    return 0;
}