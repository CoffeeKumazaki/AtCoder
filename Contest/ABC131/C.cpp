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
    
    
    long a, b, c, d;
    cin >> a >> b >> c >> d;
    a--;
    long be = (b)/c; // cout << e << " ";
    long bf = (b)/d; // cout << f << " ";
    long ae = (a)/c; // cout << e << " ";
    long af = (a)/d; // cout << f << " ";

    long gcd = __algo_gcd(d, c); // cout << gcd << " ";
    long lcm = c * d / gcd; // cout << lcm << " ";
    long bg = (b)/lcm; // cout << g << " ";
    long ag = (a)/lcm; // cout << g << " ";

    cout << (b- (be+bf-bg)) - (a  -(ae+af-ag)) << endl;

    return 0;
}