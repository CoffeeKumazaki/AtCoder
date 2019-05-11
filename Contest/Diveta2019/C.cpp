#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>
#include <string>

using namespace std;
int main(int argc, const char * argv[]) {
    
    int n;
    vector<string> s;
    cin >> n;
    s.resize(n);
    int c=0;
    int na = 0, nb = 0, nab = 0;
    for (int i = 0; i < n; i++) {
        cin >> s[i];
        bool b = false;
        for (int j=0; j<s[i].size(); j++) {
            if (s[i][j] == 'A') {
                b = true;
            }
            else if (s[i][j] == 'B') {
                if (b) c++;
                b = false;
            }
            else {
                b = false;
            }
        }
        if ( s[i][0] == 'B' && s[i][s[i].size()-1] == 'A' ) nab++;
        else if ( s[i][s[i].size()-1] == 'A' ) na++;
        else if ( s[i][0] == 'B' ) nb++;
    }

    if (nab != 0 && na + nb == 0)  
        cout << c + nab-1 << endl;
    else
        cout << c + nab + min(na, nb) << endl;

    return 0;
}