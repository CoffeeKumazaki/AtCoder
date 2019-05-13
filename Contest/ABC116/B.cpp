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

int f(int x)  {

    if (x%2 == 0) {
        return x/2;
    }
    else {
        return 3*x + 1;
    }
}

int main(int argc, const char * argv[]) {
    
    int s;
    cin >> s;

    map<int, bool> m;
    int x = s;
    int i=2;
    for (; ; i++) {
        m[x] = true;
        x = f(x);
        if (m[x] ) break;
    }

    cout << i << endl;

    return 0;
}