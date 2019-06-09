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
    
    int n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;

    string s;
    cin >> s;

    int ms=0;
    int md=0;
    int cs=0;
    int cd=0;
    bool be=false;
    for(int i=0;i<n; i++) {
        if (s[i] == '.') {
            ms = max(ms, cs);
            cs=0;
            cd++;
        }
        else {
            md = max(md, cd);
            cd=0;
            cs++;
        }
    }


    md = max(md, cd);
    ms = max(ms, cs);

    if (ms >= 2) {
        cout << "No" << endl;
        return 0;
    }

    if ( c>d ) {
        md=0;
        cd=0;
        for(int i=b;i<d; i++) {
            if (s[i] == '.') {
                ms = max(ms, cs);
                cs=0;
                cd++;
            }
            else {
                md = max(md, cd);
                cd=0;
                cs++;
            }
        }

    }

    if ( c>d && md < 3 ) {
        cout << "No" << endl;
        return 0;
    }


    cout << "Yes" << endl;
    return 0;
}
