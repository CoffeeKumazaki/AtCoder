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
    
    int n, m;
    cin >> n >> m;
    if (m <= n) {
        cout << 0 << endl;
    }
    else {

        vector<int> x;
        x.resize(m);
        
        for (int i=0; i<m; i++) {
            cin >> x[i];
        }
        sort(x.begin(), x.end());

        vector<int> d(m-1);
        for (int i=0; i<m-1; i++) {
            d[i] = x[i+1] - x[i];
        }
        sort(d.begin(), d.end());

        int c=0;
        for (int i=0; i<m-n; ++i) {
            c+=d[i];
        }
        cout << c << endl;
    }
    
    return 0;
}