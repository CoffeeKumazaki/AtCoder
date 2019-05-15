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
    
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    
    vector<int> vx(n);
    vector<int> vy(m);
    int xm = -1000, ym = 1000;
    for (int i=0; i<n; i++){
        cin >> vx[i];
        xm = max(vx[i], xm);
    }
    for (int i=0; i<m; i++){
        cin >> vy[i];
        ym = min(vy[i], ym);
    }

    bool find = false;
    for (int z=x+1; z<=y; z++){
        if ( xm < z && ym >= z ) {
            find = true;
            break;
        }
    }

    cout << ( find ? "No War" : "War" ) << endl;

    return 0;
}