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
    
    int n;
    cin >> n;

    vector<int> a;
    a.resize(n);
    int m = 1000000000;
    for (int i=0; i<n; i++) {
        cin >> a[i];
        m = min(m, a[i]);
    }

    int g = a[0];
    for (int i=1; i<n; i++) {
        g = __gcd(g, a[i]);
    }

    cout << g << endl;
    return 0;
}