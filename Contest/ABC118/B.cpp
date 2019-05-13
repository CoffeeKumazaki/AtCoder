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

    std::map<int,int> mp;
    for (int i=0; i<n; i++) {
        int k;
        cin >> k;
        for(int j=0; j<k; j++) {
            int t;
            cin >> t;
            mp[t]++;
        }
    }

    int c=0;
    for (int i=0; i<=m; i++) {
        if (mp[i] == n) c++;
    }

    cout << c << endl;
    return 0;
}