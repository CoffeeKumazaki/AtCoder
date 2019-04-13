#include <iostream>
#include <string>

using namespace std;

int main () {

    string s;
    cin >> s;

    int n1, n2;
    n1 = n2 = 0;

    for (int i = 0; i < s.size(); i++) {
        int ans = (i%2) == 0 ? 1 : 0;
        if (stoi(s.substr(i,1)) != ans) {
            n1++;
        }
    }

    for (int i = 0; i < s.size(); i++) {
        int ans = (i%2) != 0 ? 1 : 0;
        if (stoi(s.substr(i,1)) != ans) {
            n2++;
        }
    }


    cout << min(n1, n2) << endl;
    return 0;
}