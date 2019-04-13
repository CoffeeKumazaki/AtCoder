#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main () {

    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int num = 0;
    vector<int> v;
    s = s+"2";
    int cur = 1; //stoi(s.substr(0, 1));
    int init = cur;
    int n1 = stoi(s.substr(0, 1)) == 1 ? 1:0;
    for (int i = 1; i < n+1; i++) {
        if(stoi(s.substr(i, 1)) == cur) {
            n1++;
        }
        else {
            //cout << "n1 " << n1 << endl;
            v.push_back(n1);
            cur = stoi(s.substr(i, 1));

            int low = cur==1 ?  k*2+1:k*2;
            if (v.size() >= k*2+1) {

                int n2 = 0;
                //cout << "size " << v.size() << endl;
                //cout << "size " << low << endl;
                for(int l=0; l < low; l++){
                    // cout << l << endl;
                    // cout << l << " " << v[v.size()-l] << endl;
                    n2 += v[v.size()-1-l];
                }
                // << "--" << endl;
                num = max(num, n2);
            }
            else {
                num += n1;
            }
            n1=1;
        }        
    }

    cout << num << endl;
    return 0;
}