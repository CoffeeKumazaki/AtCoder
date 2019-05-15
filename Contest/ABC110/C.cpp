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

pair<char, int> max_kay(map<char, int>& m) {
  int max = 0;
  char key = m.begin()->first;
  for (map<char, int>::iterator it = m.begin(); it != m.end(); it++) {
    if (max < it->second) {
        max = it->second;
        key = it->first;
    }
  }
  return make_pair(key, max);
}

int main(int argc, const char * argv[]) {
    
    string s, t;
    cin >> s >> t;

    map<char, int> ms, mt;

    for (int i=0; i<s.size(); i++) {
        ms[s[i]]++;
        mt[t[i]]++;
    }

    bool b = true;

    for (int i=0; i<ms.size(); i++){
        
        pair<char, int> sp = max_kay(ms);
        pair<char, int> tp = max_kay(mt);
        if (sp.second != tp.second) {
            b = false;
            break;
        }
        ms[sp.first] = 0;
        mt[tp.first] = 0;
    }

    cout << ( b ? "Yes" : "No" ) <<  endl;


    return 0;
}