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
    
    int n;
    cin >> n;
    int m =0;
    int sum = 0;
    for (int i=0; i<n; i++) {
        int p;
        cin >> p;

        sum += p;
        m = max(p, m);
    }

    cout << sum - m/2 << endl;
    return 0;
}