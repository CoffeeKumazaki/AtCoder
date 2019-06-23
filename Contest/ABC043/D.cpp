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

    if (s.size()<2) {
        cout << "-1 -1" << endl;
        return 0;
    }
        

    for(int i=0; i<s.size()-1; i++){
        if (s[i]==s[i+1]) {
            cout << i+1 << " " << i + 2 <<endl;
            return 0;
        }
    }
    for(int i=0; i<s.size()-2; i++){
        if (s[i]==s[i+2]) {
            cout << i+1 << " " << i + 3 <<endl;
            return 0;
        }
    }
    cout << "-1 -1" << endl;

    return 0;
}