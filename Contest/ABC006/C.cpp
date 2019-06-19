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
    
    int n, m;
    cin >> n >> m;

    for (int c=0; c<=n; c++) {
        int a = -m + 3 * n + c;
        int o = m - 2*n - 2*c;
        if (a>=0 && o>=0){
            cout << a << " ";
            cout << o << " ";
            cout << c << endl;
            return 0;
        }
    }
            cout << -1 << " ";
            cout << -1 << " ";
            cout << -1 << endl;

    return 0;
}