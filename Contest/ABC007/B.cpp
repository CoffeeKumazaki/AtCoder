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

    if (s.size()==1 && s[0] == 'a') {
        cout << -1 << endl;
    }
    else {
        cout << "a" << endl;
    }
    return 0;
}