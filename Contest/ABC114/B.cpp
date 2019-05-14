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
    
    string s;
    cin >> s;

    int t = 753;
    int min = 1000000000;
    for (int i=0; i<s.size()-2; i++) {

        string sub = s.substr(i, 3);
        min = std::min(min, abs((int)stoi(sub) - t));
    }
    cout << min << endl;
    return 0;
}