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
bool compare_by_b(pair<int, int> a, pair<int, int> b) {
    if(a.second != b.second){
        return a.second < b.second;
    }else{
        return a.first < b.first;
    }
}

int main(int argc, const char * argv[]) {
    
    int n;
    cin >> n;

    vector<pair<int, int> > t(n);
    int as = 0, bm = 0;
    for(int i=0; i<n; i++) {
        int a, b;
        cin >> a >> b;
        t[i] = make_pair(a, b);
        as += a;
        bm = max(bm, b);
    }

    sort(t.begin(), t.end(), compare_by_b);

    int c = 0;
    for(int i=0; i<n; i++) {
        c += t[i].first;
        if (c>t[i].second) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}