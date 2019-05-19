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
    
    int n, k;
    cin >> n >> k;

    double p = 0.0;
    if ( k <= n )
        p += double(n-k+1)/double(n);

    for (int i=1; i < k && i <= n; i++) {
        int d = log(k/i)/log(2) ;
        if (i*pow(2, d) < k) d++;
        double pt = double(1.0)/ double(pow(double(2), double(d))) / double(n);
        // cout << d << " " << std::setprecision(12) << pt << endl;
        p += pt;
    }

    cout << std::setprecision(12) << p << endl;
    return 0;
}