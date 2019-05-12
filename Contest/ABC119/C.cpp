#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>
#include <string>

using namespace std;

int dfs(int max, const vector<int>& l, int n, int a, int b, int c, int A, int B, int C) {

    if (n == max) 
        return (min(a, min(b, c))) ?  abs(a-A) + abs(b-B) + abs(c-C) - 30 : 1000000;

    int sa = dfs(max, l, n + 1, a+l[n], b, c, A, B, C) + 10;
    int sb = dfs(max, l, n + 1, a, b+l[n], c, A, B, C) + 10;
    int sc = dfs(max, l, n + 1, a, b, c+l[n], A, B, C) + 10;
    int sx = dfs(max, l, n + 1, a, b, c, A, B, C);

    return min(sa, min(sb, min(sc, sx)));
}

int main(int argc, const char * argv[]) {
    
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    vector<int> l;
    l.resize(n);
    for (int i=0; i<n; i++) {
        cin >> l[i];
    }

    int ret = dfs(n, l, 0, 0, 0, 0, a, b, c);

    cout << ret << endl;

    return 0;
}