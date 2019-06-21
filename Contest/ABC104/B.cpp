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
    
    string s;
    cin >> s;

    if (s[0] != 'A') {
        cout << "WA" << endl;
        return 0;
    }

    int c=0;
    for (int i=2; i<s.size()-1; i++) {
        if (s[i]=='C') c++;
    }

    if (c!=1) {
        cout << "WA" << endl;
        return 0;
    }

    for (int i=0; i<s.size(); i++) {
        if (s[i]=='C' || s[i] == 'A') continue;

        if (!islower(s[i])) {
            cout << "WA" << endl;
            return 0;
        }
    }
   
    cout << "AC" << endl;

    return 0;
}