#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>
#include <string>
#include <map>
#include <queue>
#include <stack>
#define FOR(arg, ini, end) for(int arg = ini; arg < end; arg++)


using namespace std;
int main(int argc, const char * argv[]) {
    
    int n; cin >> n;
    if (n%2!=0) {
        cout << 0 << endl;
        return 0;
    }

    vector<int> d(n);
    FOR(i, 0, n) {
        cin >> d[i];
    }

    sort(d.begin(), d.end());
    int mid = n/2;
    cout << d[mid] - d[mid-1] << endl;

    return 0;
}