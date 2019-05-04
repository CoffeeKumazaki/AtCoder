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
    vector<int> v;
    int x=0, y=0;
    for (int i = 0; i < n; ++i) {
        int a=0;
        cin >> a;
        v.push_back(a);
    }
    for (int i = 0; i < n; ++i) {
        int a=0;
        cin >> a;
        if (a<v[i]) {
            x+= v[i];
            y+= a;
        }
    }

    cout << x - y << endl;
    return 0;
}