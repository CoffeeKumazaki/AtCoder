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
    
    string at="atcoder";
    string s, t;

    cin >> s >> t;

    bool win = true;
    for (int i=0; i < s.size(); ++i) {
        if ( s[i] == t[i] ) {
        }
        else if ( s[i] == '@' && at.find(t[i]) != string::npos) {
        }
        else if ( t[i] == '@' && at.find(s[i]) != string::npos){
        }
        else {
            win = false;
            break;
        }
    }

    if (win) {
        cout << "You can win" << endl;
    }
    else {
        cout << "You will lose" << endl;
    }
    return 0;
}