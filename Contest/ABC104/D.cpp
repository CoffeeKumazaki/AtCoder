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
string t = "ABC";
long dp(int i, int c, string& s, vector<vector<long> >& dd) {

    long d;
    if (dd[i][c] > -1) return dd[i][c];

    // cout << i << " "  << c << " " << dd[i][c] << endl;
    if (i>=s.size()) {
        return (c>=3) ? 1 : 0;
    }

    long m = s[i] == '?' ? 3 : 1;
    if (c>=3) {
        d = (m*dp(i+1, c, s, dd))%1000000007;
    }
    else {
        d = (m*dp(i+1, c, s, dd))%1000000007;
        if ((s[i] == t[c] || s[i] == '?') ){
            d += (dp(i+1, c+1, s, dd))%1000000007;
        }
    }

    dd[i][c] = d;
    // cout << "#" << i << " " << c << " "  << dd[i][c] <<  endl;
    return d;

}

int main(int argc, const char * argv[]) {
    
    string s;
    cin >> s;

    vector<vector<long> > d(s.size()+1);
    for (int i=0; i<d.size(); i++) {
        vector<long> vv(4, -1);
        d[i] = vv;
    }
    cout << dp(0, 0, s, d) << endl;
    return 0;
}