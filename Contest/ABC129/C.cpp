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
    
    int n, m;
    cin >> n >> m;
    n++;
    vector<int> a(n,0);
    vector<long> s(n,0);
    for(int i=0; i<m; i++) {
        int t;
        cin >> t;
        a[t] = 1;
    }

    long t = 1;
    int id=0;
    for (int i=0; i<n; i++) {
        if (i-id <= 1) {
            s[i] = a[i] ? 0 : 1;
        }
        else {
            s[i] = a[i] ? 0 : s[i-1] + s[i-2];
        }

        if (a[i])  {
            t *= s[i-1];
            id = i+1;
        }
        
        // cout << a[i] << " " << s[i] << endl;
    }

    cout << (t*s[n-1])%1000000007 << endl;

    return 0;
}