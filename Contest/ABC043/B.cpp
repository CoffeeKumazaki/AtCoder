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
    
    string s; cin >> s;
    string t;
    for(int i=0; i<s.size(); i++){
        if (s[i]=='B'){
            if (t.size()!=0) t = t.substr(0, t.size()-1);
        }
        else {
            t += s[i];
        }
    }

    cout << t << endl;
    return 0;
}