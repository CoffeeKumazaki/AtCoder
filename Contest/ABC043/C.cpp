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

using namespace std;
int main(int argc, const char * argv[]) {
    
    int n; cin >> n;
    vector<int> a(n);
    int ami = 1000000000;
    int ama = -1000000000;
    for(int i=0; i<n; i++) {
        cin >> a[i];
        ami = min(ami, a[i]);
        ama = max(ama, a[i]);
    }

    int mi = 1000000000;
    for(int i=ami; i<ama; i++) {
        int c=0;
        for(int j=0; j<n; j++) {
            c +=(i-a[j])*(i-a[j]);
        }
        mi = min(c, mi);
    }

    if (ami == ama)
        cout << 0 << endl;
    else 
        cout << mi << endl;

    return 0;
}