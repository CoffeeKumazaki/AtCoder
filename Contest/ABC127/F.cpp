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
    
    long q;
    cin >> q;

    long mv = 0;
    long rmi = 1000000000, rmx = -1000000000;
    for (int i=0; i<q; i++) {
        long c;
        cin >> c;
        if (c == 1) {
            long a, b;
            cin >> a >> b;
            rmi = min(rmi, a);
            rmx = max(rmx, a);
            mv += (b + (rmx-a) );
        }
        else if (c == 2) {
            cout << rmi << " " << mv << endl;
        }
    }

    return 0;
}