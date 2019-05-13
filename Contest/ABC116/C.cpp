#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>
#include <string>

using namespace std;

int water(vector<int>& h) {

    if (h.empty()) return 0;
    if (h.size()==1) return h[0];


    int r=0;
    vector<int> t;
    for (int i=0; i < h.size(); i++ ){
        if (h[i]==0) {
            if ( !t.empty()) {
                r += water(t) + 1;
                t.clear();
            }
        }
        else {
            t.push_back(h[i]-1);
        }
    }
    r += water(t);
    if (!t.empty()) r++;

    return r;
}

int main(int argc, const char * argv[]) {
    
    int n;
    cin >> n;
    vector<int> h(n);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    cout << water(h) << endl;

    return 0;
}