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
    
    string w;
    cin >> w;

    map<char, int> m;
    for(int i=0; i<w.size(); i++){
        m[w[i]]++;
    }

    for(map<char, int>::iterator it = m.begin(), itEnd=m.end(); it!=itEnd; it++){
        if ( (*it).second %2 ) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;


    return 0;
}