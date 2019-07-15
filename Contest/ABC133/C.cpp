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
    
    long l, r;
    cin >> l >> r;
    long m=2020;
    FOR(i, l, min(r+1, l+2019)) {
        FOR(j, i+1, min(r+1, l+2019)) {
            m = min(m, (((long)i*(long)j))%2019);
        }
    }

    cout << m << endl;
    return 0;
}