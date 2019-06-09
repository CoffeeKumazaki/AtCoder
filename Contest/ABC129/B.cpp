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

    vector<int> w(n);
    cin >> w[0];
    for (int i=1; i<n; i++) {
        int t;
        cin >> t;
        w[i] = t+w[i-1];
    }

    int m=100000;
    for (int i=0; i<n; i++) {
        m = min(m, abs(w[n-1] - w[i] - w[i]));
    }
    
    cout << m << endl;
    return 0;
}