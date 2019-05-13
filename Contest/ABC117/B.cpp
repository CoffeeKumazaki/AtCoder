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
    
    int n;
    cin >> n;

    vector<int> l;
    l.resize(n);

    int m=0, s=0;
    for (int i=0; i<n; i++) {
        int l;
        cin >> l;
        s += l;
        m = max(m, l);
    }

    cout << ( (m < s-m) ? "Yes" : "No" ) << endl;


    return 0;
}