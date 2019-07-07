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
    
    string s;
    cin >> s;
    vector<char> a(26, 0);
    
    FOR(i, 0, s.size()){
        a[s[i]-'A']++;
    }
    int cnt = 0;
    FOR(i, 0, 26){
        if (a[i] > 2) {
            cout << "No" << endl;
            return 0;
        }
        if (a[i]>0)
            cnt++;
    }

    if (cnt == 2) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}