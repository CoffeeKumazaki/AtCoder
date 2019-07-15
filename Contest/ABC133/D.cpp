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
    
    int n;
    cin >> n;
    vector<long> a(n,0);

    long s = 0, se = 0;
    FOR(i, 0, n){
        cin >> a[i];
        s+=a[i];
        if (i%2==1){
            se+=a[i];
        }
    }

    vector<long> x(n,0);
    x[0] = s - 2*se;

    FOR(i, 1, n) {
        x[i] = 2*a[i-1] - x[i-1];
    }


    FOR(i, 0, n) {
        cout << x[i] << " ";
    }
    cout << endl;



    return 0;
}