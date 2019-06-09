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
    
    int p, q, r;
    cin >> p >> q >> r;

    cout << min(p+q, min(q+r, p+r)) << endl;
    return 0;
}