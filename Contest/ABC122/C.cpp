#include <iostream>
#include <string>

using namespace std;

int main () {

    int N, Q;
    cin >> N >> Q;
    string str;
    cin >> str;

    string AC = "AC";

    int ac[100000];
    int sum[100001];

    for (int j = 0; j < N; ++j) {
        if (str[j] == 'A' && str[j+1]== 'C') {
            ac[j] = 1;
        } else {
            ac[j] = 0;
        }
    }

    sum[0] = 0;
    for (int j = 1; j < N; ++j) {
        sum[j] = sum[j-1] + ac[j-1];
    }


    for(int i = 0; i < Q; i++)
    {
        int l, r;
        cin >> l >> r;
        cout << sum[r-1]-sum[l-1] << endl;
    }
}