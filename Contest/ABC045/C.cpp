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
#define FOR(arg, ini, end) for(int arg = ini; arg < end; arg++)


using namespace std;

int main(int argc, const char * argv[]) {
    
    string s; cin >> s;

    long sum=0;
    FOR(i, 0, 1<<(s.size()-1) ){
        long st=0;
        string t = s.substr(0,1);
        FOR(j,0,s.size()-1){
            if (i&(1<<j)) {
                // cout << t << "+";
                st += stol(t);
                t= s.substr(j+1, 1);
            }
            else {
                t += s[j+1];
            }
        }
        st += stol(t);
        // cout << t << "=" <<st<<endl;
        sum+=st;
    }
    cout << sum << endl;
    return 0;
}