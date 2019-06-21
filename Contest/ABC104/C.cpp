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
    
    
    int d, g;
    cin >> d >> g;
    vector<int> p(d), c(d);

    for (int i=0; i<d; i++){
        cin >> p[i] >> c[i];
    }

    int ans = __INT_MAX__;
    for (int mask=0; mask < (1<<d); mask++) {
        int s = 0, cnt = 0, rm=-1;
        for(int i=0; i<d; i++) {
            if (1&(mask>>i)){
                s += p[i]*(i+1)*100+c[i];
                cnt += p[i];
            } 
            else {
                rm = i;
            }
        }

        if (s<g) {
            int r=g-s+(rm+1)*100-1;
            int rr = r/((rm+1)*100);
            if (rr >= p[rm]){
                continue;
            }
            cnt += rr;
        }

        ans = min(ans, cnt);
    }

    cout << ans << endl;
    return 0;
}