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
    
    int n, k;
    cin >> n >> k;
    vector<double> r(n);
    for (int i=0; i<n; i++) {
        cin >> r[i];
    }

    sort(r.begin(), r.end());

    double s=0.0;
    for (int i = n-k; i < n; i++)
    {
        s = (s+r[i])/ 2.0;
    }
    printf("%lf\n", s);
    return 0;
}