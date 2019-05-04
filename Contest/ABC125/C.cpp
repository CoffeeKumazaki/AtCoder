#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>
#include <string>

using namespace std;

int gcd( int u, int v){


    while( v != 0) {
        int r = u % v; 
        u = v;
        v = r;
    }

    return u;
}

int main(int argc, const char * argv[]) {
    
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; ++i) {
        int a=0;
        cin >> a;
        v.push_back(a);
    }

    vector<int> l, r, m;
    l.resize(n);
    r.resize(n+1);
    l[0] = 0;
    r[n] = 0;

    for (int i=0; i < n; i++) {
        l[i+1] = gcd(l[i], v[i]);
        r[n-i-1] = gcd(r[n-i], v[n-i-1]);
        //cout << v[n-i-1] << endl;
        // cout << i << ": " << l[i+1] <<  " " << r[n-i-1] << endl;
    }

    int max = 0;
    for (int i=0; i < n; i++) {
        max = std::max(max, gcd(l[i-1], r[i]));
    }

    cout << max << endl;
    return 0;
}