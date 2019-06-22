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
    
    int n, l;
    cin >> n >> l;

    int s=0;
    int mi = 100*200;
    int mi_id = 0;
    for(int i=0; i<n; i++) {
        s +=(l+i);
        if (mi > abs(l+i)) {
            mi = min(mi, abs(l+i));
            mi_id = i;
        }
    }
    if ( l<=0 && 0<l+n) {
        cout << s << endl;
    }
    else {
        cout << s-(l+mi_id) << endl;
    }

    return 0;
}