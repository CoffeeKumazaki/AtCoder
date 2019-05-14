#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>
#include <string>

using namespace std;

int dfs(int tar, long long n, int a, int b, int c) {

    int ret = 0;

    if (n>tar) return 0;

    if ( a && b && c && n <= tar ) ret += 1;

    ret += dfs(tar, n*10 + 3, a + 1, b, c);
    ret += dfs(tar, n*10 + 5, a, b + 1, c);
    ret += dfs(tar, n*10 + 7, a, b, c + 1);

    return ret;
}

int main(int argc, const char * argv[]) {
    
    int n;
    cin >> n;
    if (n<357) {
        cout << 0 << endl;
    }
    else {
        cout << dfs(n, 0, 0, 0, 0) << endl;
    }

    return 0;
}