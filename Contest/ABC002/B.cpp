#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main () {
    string s;
    cin >> s;


    for (int i=0; i < s.size(); ++i) {
        switch (s[i]){
            case 'a': break;
            case 'i': break;
            case 'u': break;
            case 'e': break;
            case 'o': break;
            default:
                cout << s[i];

        }
    }
    cout << endl;
    return 0;
}
