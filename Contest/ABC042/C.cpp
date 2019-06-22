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
    
    int n, k; cin >> n >> k;
    map<int, int> m;
    for (int i=0; i<k; i++) {
        int d;
        cin >> d;
        m[d]++;
    }

    while(true) {
        int t=n;
        bool b=true;
        while(t>0) {
            if(m[t%10]>0) b=false;
            t /=10;
        }
        if (b)break;
        n++;
    }

    cout << n << endl;
    return 0;
}