#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>
#include <string>
#include <map>
#include <set> 

using namespace std;
int main(int argc, const char * argv[]) {
    
    long n, m;
    cin >> n >> m;

    map<long, long> a;
    set<long> s;
    for (long i = 0; i < n; i++) {
        long at;
        cin >> at;
        a[at] += 1;
        s.insert(at);
    }

    for (long i = 0; i < m; i++) {

        // cout << "--" << endl;
        long b, c;
        cin >> b >> c;
        while (b>0) {
            long mi = *s.begin();
            // cout << mi << " " << a[mi] << endl;
            if (c > mi) {

                if ( a[mi] <= b ) {
                    a[c] += a[mi];
                    b -= a[mi];
                    a[mi] = 0;
                    s.erase(mi);
                }
                else {
                    a[mi] -= b;
                    a[c] += b;
                    b = 0;
                }
                s.insert(c);
            }
            else {
                break;
            }

        }

    }

    long r = 0;
    for(map<long, long>::iterator it = a.begin(), itEnd = a.end(); it != itEnd; ++it) {
        long key = (*it).first;
        long val = (*it).second;
       //  cout << key << " " << val << endl;

        r += (key*val);
    }

    cout << r << endl;

    return 0;
}