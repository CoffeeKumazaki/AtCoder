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
long dp[2000][2000];
long p[2000];

long nCr(int n, int r){
       if(n==r) return dp[n][r] = 1;
       if(r==0) return dp[n][r] = 1;
       if(r==1) return dp[n][r] = n;
       if(dp[n][r]) return dp[n][r];
       return dp[n][r] = nCr(n-1,r)%1000000007 + nCr(n-1,r-1)%1000000007;
}

uintmax_t combination(unsigned int n, unsigned int r) {
  if ( r * 2 > n ) r = n - r;
  uintmax_t dividend = 1;
  uintmax_t divisor  = 1;
  for ( unsigned int i = 1; i <= r; ++i ) {
    dividend *= (n-i+1);
    divisor  *= i;
  }
  return dividend / divisor;
}

long calc_p(int n) {

    if (n == 0) return 1;
    if (n == 1) return 1;

    if ( p[n] < 0 ) {
        p[n] = (n*calc_p(n-1))%1000000007;
    }
       // cout << n << " " << p[n] << endl;
    return p[n];
}

int main(int argc, const char * argv[]) {
    
    int n, k;
    cin >> n >> k;

    FOR(i, 1, min(n-k, k)+1){
        long c;
        cout << "-" << endl;
        cout << i+(n-k) << " ";
        cout << (i) << " ";
        cout << (n-k) << endl;
        c = (
            combination(i+(n-k), n-k)*
            combination(k+i-1,k)
            //combination(n-k+i-1,n-k)
            )%1000000007;
         // c = (calc_p(i+(n-k))/calc_p(i)/calc_p(n-k));//%1000000007;
        cout << c << endl;
    }
    return 0;
}