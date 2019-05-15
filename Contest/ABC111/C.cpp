#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>
#include <string>
#include <map>

using namespace std;

pair<int, int> max_kay(map<int, int>& m) {
  int max = 0;
  int key = m.begin()->first;
  for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
    if (max < it->second) {
        max = it->second;
        key = it->first;
    }
  }
  return make_pair(key, max);
}

int main(int argc, const char * argv[]) {
    
    int n;
    cin >> n;

    map<int, int> e, o;

    for(int i=0; i<n; i=i+2){
        int et, ot;
        cin >> et;
        cin >> ot;
        e[et]++;
        o[ot]++;
    }

    pair<int, int> em1 = max_kay(e);
    pair<int, int> om1 = max_kay(o);

    if (em1.first == om1.first) {
        e[em1.first]=0;
        pair<int, int> em2 = max_kay(e);
        o[om1.first]=0;
        pair<int, int> om2 = max_kay(o);
        if ( om2.second + em1.second >  om1.second + em2.second)
            cout <<  ( n/2 - om2.second) + (n/2 - em1.second) << endl;
        else 
            cout <<  ( n/2 - om1.second) + (n/2 - em2.second) << endl;
    }
    else {
        cout <<  ( n/2 - om1.second) + (n/2 - em1.second) << endl;
    }


    return 0;
}