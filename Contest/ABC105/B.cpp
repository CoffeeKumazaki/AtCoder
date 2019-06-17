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
    
    int n;
    int c=4, d=7;
    cin >> n;

    bool f=false;
    for (int i=0; i<=n/c; i++) {
        if ( (n - i*c) % d == 0 ) {
            f = true;
            break;
        }
    }

    cout << ( f ? "Yes" : "No") << endl;
    return 0;
}