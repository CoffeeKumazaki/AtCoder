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
    
    int r;
    cin >> r;
    if (r < 1200) {
        cout << "ABC" <<endl;
    }
    else if (r < 2800) {
        cout << "ARC" <<endl;
    }
    else {
        cout << "AGC" <<endl;
    }


    return 0;
}