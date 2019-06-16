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
    vector<int> a(n);
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    vector<pair<int, int> > p(n-1);
    int l=0, r=n-1;
    int i=0;
    int ans = 0;
    while (l<r-1){
#if 0
        for (int j=l; j<=r; j++) {
            cout << a[j] << " ";
        }
        cout << endl;
#endif
        int mi = a[l] - a[r-1];
        int pl = a[r] - a[l+1];
        if ( abs(mi) >= abs(pl) ) {
            p[i].first = a[l];
            p[i].second = a[r-1];
            a[r-1] = a[r];
            a[r] = __INT_MAX__;
            a[l] = mi;
            r--;
            ans = mi;
        }
        else {
            p[i].first = a[r];
            p[i].second = a[l+1];
            a[r] = pl;
            a[l+1] = a[l];
            a[l] = -__INT_MAX__-1;
            l++;
            ans = pl;
        }
        i++;
    }

    cout << ((a[r] > a[l]) ? a[r] - a[l] : a[l] - a[r] ) << endl;
    p[i].first = a[r] > a[l] ? a[r] : a[l];
    p[i].second = a[r] > a[l] ? a[l] : a[r];
    for (int i=0; i<n-1; i++ ){
        cout << p[i].first << " " << p[i].second << endl;
    }
    
    return 0;
}