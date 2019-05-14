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

    vector<int> p(m), y(m);
    vector<vector<int> > v(n);
    v.resize(n);

    for (int i=0; i< m; i++) {
        int pt, yt;

        cin >> pt >> yt;
        p[i] = pt;
        y[i] = yt;
        v[pt-1].push_back(yt);
    }


    map<int, int> mp[100001];
    for (int i=0; i<n; i++){
        sort(v[i].begin(), v[i].end());
        for(int j=0; j<v[i].size(); j++) {
            mp[i+1][v[i][j]] = j+1;
        }
    }


    for (int i=0; i<m; i++){
        printf("%06d%06d\n", p[i], mp[p[i]][y[i]] );
    }

    return 0;
}