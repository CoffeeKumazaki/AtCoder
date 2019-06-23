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
long dp[60][60][3000];

int main(int argc, const char * argv[]) {
    
    int n, a; cin >> n >> a;
    vector<int> x(n);
    for(int i=0; i<n;i++){
        cin >> x[i];
    }
    FOR(i, 0, 60){
        FOR(j, 0, 60){
            FOR(k, 0, 3000){
               dp[i][j][k] = 0;
            }
        }
    }
    dp[0][0][0] = 1;
    FOR(i, 0, n){
        FOR(j, 0, n){
            FOR(k, 0, 3000){
                if ( dp[i][j][k] == 0 ) continue;

                dp[i+1][j][k] += dp[i][j][k];
                dp[i+1][j+1][k+x[i]] = dp[i][j][k];
            }
        }
    }
    long ans = 0;
    FOR(i, 1, n+1) {
        ans += dp[n][i][i*a];
    }


    cout << ans << endl;
    return 0;
}