#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string S;
    cin >> S;

    int nCnt = 0;
    int nMax = 0;
    for (int i = 0; i < (int)S.size(); ++i) {
        char s = S[i];
        if (  s == 'A' 
            | s == 'T'
            | s == 'C'
            | s == 'G'
         ) {
             nCnt++;
        }
        else {
            if (nMax < nCnt) nMax = nCnt;
            nCnt = 0;
        }
    }

    if (nMax < nCnt) nMax = nCnt;

    cout << nMax << endl;
}