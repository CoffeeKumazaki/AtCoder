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
    
    int n, k;
    cin >> n >> k;
    
    vector<int> h(n);

    for (int i=0; i< n; i++) {
        cin >> h[i];
    }

    sort(h.begin(), h.end());

    int s = 1000000000;
    for (int i=0; i<n-k+1; i++) {
        s = min(s, h[i+k-1]-h[i]);
    }

    cout << s << endl;
    return 0;
}