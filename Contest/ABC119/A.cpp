#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>
#include <string>
#include <sstream>
#include <istream>

using namespace std;
int main(int argc, const char * argv[]) {
    
    string s;
    cin >> s;
    string targ="2019/04/30";
    if (s <= targ) cout << "Heisei" << endl;
    else cout << "TBD" << endl;

    return 0;
}