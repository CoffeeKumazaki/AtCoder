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
    int mi = 0, mx = 1000000;
    for (int i=0; i< n; i++) {
        int l, r;
        cin >> l >> r;
        mi = max(mi, l);
        mx = min(mx, r);
    }

    cout << max(mx - mi + 1, 0) << endl;
    return 0;
}