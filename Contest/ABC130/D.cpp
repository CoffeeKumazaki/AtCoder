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
    
    long n, k;
    cin >> n >> k;
    vector<long> a(n);
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }   

    long l=0, r=0;
    long c = 0;
    long s = 0;
    while ( r < n ) {
        s += a[r];
        if (s>=k) {
            c += (n-r);
            s -=a[l];
            s -=a[r];
            l++;
        }
        else {
            r++;
        }
    }

    cout << c << endl;

    return 0;
}