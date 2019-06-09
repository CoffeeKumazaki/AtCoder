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
    
    vector<vector <int>> s(m);
    vector<int> p(m);
    for (int i = 0; i < m; i++ ){
        int k;
        cin >> k;
        s[i].resize(k);
        for (int j=0; j<k; j++) {
            cin >> s[i][j];
        }
    }
    for (int i = 0; i < m; i++ ){
        cin >> p[i];
    }

    for (int i=0; i<n; i++) {
        // on
        for(int j=0; j<s[i].size(); j++) {
            
        }
        // off
    }
    return 0;
}