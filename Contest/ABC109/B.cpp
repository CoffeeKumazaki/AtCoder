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

    map<string, bool> m;

    string p, c;
    cin >> p;
    bool b=true;
    for (int i = 1; i < n; i++)
    {
        cin >> c;
        if ( c[0] != p[p.size()-1] || m[c] ) {
            b=false;
            break;
        }
        m[p] = true;
        p = c;
    }
    
    cout << ( b ? "Yes" : "No" ) << endl;

    return 0;
}