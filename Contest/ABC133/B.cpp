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
    
    int n, d;
    cin >> n >> d;
    
    vector<vector<int> > x(n, vector<int>(d, 0));
    FOR(i, 0, n) {
        FOR(j, 0, d) {
            cin >> x[i][j];
        }
    }

    int c=0;
    FOR(i, 0, n) {
        FOR(j, i+1, n) {
            double dis = 0.0;
            FOR(k, 0, d) {
                dis += (x[i][k] - x[j][k])*(x[i][k] - x[j][k]);
            }
            dis = sqrt(dis);
            if (ceil(dis) == floor(dis)) {
                c++;
            }
        }
    }

    cout << c << endl;
    return 0;
}