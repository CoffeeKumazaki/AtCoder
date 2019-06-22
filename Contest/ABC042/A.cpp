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
    
    int a, b, c; 
    cin >> a >> b >> c;
    map<int, int> m;
    m[a]++; m[b]++; m[c]++;

    if (m[5] == 2 && m[7]==1) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}