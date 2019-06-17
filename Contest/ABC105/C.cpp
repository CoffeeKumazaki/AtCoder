#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>
#include <string>
#include <map>
#include <stack>

using namespace std;
int main(int argc, const char * argv[]) {
    
    int n;
    cin >> n;
    stack<int> s;
    while (n) {
        if (n%2) {
            s.push(1);
            n--;
        }
        else {
            s.push(0); 
        }
        n /= (-2);
    }
    if (s.empty()) cout << "0";
    
    while(!s.empty()) {
        cout << s.top();
        s.pop();
    }
        cout << endl;
    return 0;
}