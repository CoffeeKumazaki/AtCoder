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
    
    int n;
    cin >> n;

    vector<unsigned long> c(n,0);
    c[2] = 1;
    for (int i=3; i<n; i++) {
        c[i] = c[i-2] + c[i-1] + c[i-3];
        c[i] = c[i]% 10007;

    }

    cout << (c[n-1] % 10007) << endl;
    return 0;
}