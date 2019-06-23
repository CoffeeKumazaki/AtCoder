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

using namespace std;
int main(int argc, const char * argv[]) {
    
    int n, k, x, y; cin >> n >> k >> x >> y;

    cout << ( min(n,k)*x + max(0, n-k)*y ) << endl;

    return 0;
}