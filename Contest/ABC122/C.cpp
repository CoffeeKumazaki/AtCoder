#include <iostream>
#include <string>

using namespace std;

int main () {

    int N, Q;
    cin >> N >> Q;
    string str;
    cin >> str;

    string AC = "AC";

    for(int i = 0; i < Q; i++)
    {
        int l, r;
        int nACNum = 0;
        cin >> l >> r;
        // string target = str.substr(l-1, r-1);
        int index = 0;
        int cursor = l-1;
        while (cursor < r) {
            int step = 1;
            if (str[cursor] == 'G' || str[cursor] == 'T') {
                step = 2;
            }
            else if (str[cursor] == 'C' ) {
                if ( cursor != l-1 && str[cursor-1] == 'A') {
                    nACNum++;
                }
                step = 2;
            }
            else {
                step = 1;
            }

            cursor += step;
        }

#if 0
        for (int j = l-1; j < r; ++j) {
            char s = str[j];
            if (s == AC[index]) {
                if (index == AC.size()-1) {
                    nACNum++;
                    index = 0;
                }
                else {
                    index++;
                }
            }
            else {
                index = 0;
            }
        }
#endif
        cout << nACNum << endl;

    }
}