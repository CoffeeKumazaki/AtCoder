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
    for (int i=1; i<s.size(); i++) {
        if (s[i] == s[i-1]) {
            cout << "Bad" << endl;
            return 0;
        }
    }

    cout << "Good" << endl;

    return 0;
}