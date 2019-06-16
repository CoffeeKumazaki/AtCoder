#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>
#include <string>
#include <map>

using namespace std;
int main(int argc, const char * argv[]) {
    
    int n, k;
    cin >> n >> k;

    if (k==1) {
        cout << 0 << endl;
    }
    else {
        cout << n - (k - 1) - 1 << endl;
    }
    return 0;
}