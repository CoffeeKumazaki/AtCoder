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
    
    int n, t;
    cin >> n >> t;

    int m=1001;
    int index = 1;
    for (int i=0; i<n; i++) {
        int x, y;
        cin >> x >> y;
        if (t >= y && m > x) {
            m = x;
        }
    }

    if (m>=1001) 
        cout << "TLE" << endl;
    else 
        cout << m << endl;


    return 0;
}