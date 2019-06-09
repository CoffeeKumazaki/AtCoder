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
    vector<int> s(n,0);
    for(int i=0; i<m; i++) {
        int t;
        cin >> t;
        a[t] = 1;
    }

    s[0] = a[0] ? 0 : 1;
    s[1] = a[1] ? 0 : 1;
    
    for (int i=2; i<n; i++) {
        if (!a[i]) {
            s[i] = s[i-1] + s[i-2];
            s[i] %=  1000000007;
        }
    }

    cout << s[n-1] << endl;

    return 0;
}