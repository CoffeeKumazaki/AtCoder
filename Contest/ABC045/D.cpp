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
#define FOR(arg, ini, end) for(int arg = ini; arg < end; arg++)


using namespace std;

int main(int argc, const char * argv[]) {
    
    int h, w, n;
    cin >> h >> w >> n;

    map<pair<int, int>, unsigned long> m;
    #if 0
    FOR(i, 0, h-2){
        FOR(j, 0, w-2){
            m[make_pair(i, j)] = 0;
        }
    }
    #endif

    FOR(i, 0, n) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        FOR(r, 0, 3) {
            FOR(c, 0, 3) {
                int nr = a-2+r, nc = b-2+c;
                if ( nr<h-2 && nc<w-2 && 0<=nr && 0<=nc){
                    m[make_pair(nr, nc)]++;
                }
            }
        }
    }

    unsigned long c[10]={0};
    for(map<pair<int, int>, unsigned long>::iterator it = m.begin(), itEnd=m.end(); it!=itEnd; it++){
        // cout << (*it).first.first << " " << (*it).first.second << ":" << (*it).second << endl;
        c[(*it).second]++;
    }
    unsigned long cn = (unsigned long)(h-2)*(unsigned long)(w-2);
    FOR(i, 0, 10) {
        cn -= c[i];
    }
    c[0] = cn;

    FOR(i, 0, 10) {
        cout << c[i] << endl;
    }

    return 0;
}