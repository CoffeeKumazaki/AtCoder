#include <iostream>
#include <iomanip>
#include <vector>
#include <numeric>
#include <functional>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int n, x;
    cin >> n >> x;
    
    vector<long long> v(n+1);
    v[0] = x;
    for (int i = 1; i < n+1; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    long long c = abs(v[1]-v[0]);
    for (int i = 2; i < n+1; i++) {
        c = __gcd(c, v[i]-v[i-1]);
    }

    cout << c << endl;
    
    return 0;
}