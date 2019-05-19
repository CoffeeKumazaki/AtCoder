#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>
#include <string>
#include <map>

int isMonth(int f) {

    return f <= 12 && f > 0;
}

using namespace std;
int main(int argc, const char * argv[]) {
    
    int s;
    cin >> s;
    int f = s/100;
    int b = s%100;
    bool fm = isMonth(f);
    bool bm = isMonth(b);
    if ( !fm && !bm ){
        cout << "NA" << endl;
    }
    else if ( fm && bm ) {
        cout << "AMBIGUOUS" << endl;
    }
    else if ( fm && !bm) {
        cout << "MMYY" << endl;
    }
    else if ( !fm && bm) {
        cout << "YYMM" << endl;
    }

    return 0;
}