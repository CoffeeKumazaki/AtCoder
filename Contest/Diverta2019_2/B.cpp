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
    vector<pair<long, long> > pos(n);
    vector<vector<pair<long, long> > > cost(n);

    for (int i =0; i<n; i++) {
        int x, y;
        cin >> x >> y;
        pos[i].first = x;
        pos[i].second = y;
    }

    for (int i=0; i<n; i++) {
        cost[i].resize(n);
        for (int j=0; j<i; j++) {
            cost[i][j].first = pos[i].first - pos[j].first;
            cost[i][j].second = pos[i].second - pos[j].second;
            cout << i << " " << j << " ";
            cout << cost[i][j].first << " " << cost[i][j].second << endl;
        }
    }

    return 0;
}