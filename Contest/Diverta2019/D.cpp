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
    
    long n;
    cin >> n;

    unsigned long m = 0;

    for (long i=1; i*i <= n; ++i) {
        // cout << i << endl;
        if(n % i == 0) {
            long a = i-1;
            // // cout << a << endl;
            if ( a != 0 && n/a == n%a ) m += a;
            if (i*i != n ) {
                long b = n/i-1;
                if ( n/b == n%b ) m += b;
            }
        }
    }

    cout << m << endl;
    return 0;
}