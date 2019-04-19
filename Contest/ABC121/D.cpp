#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>
#include <string>

using namespace std;
int f(int A) {
    
    if (A<=1) return 0;

    int res=0;
    for (int i=) {
        
    }


    return 0;
}

int main(int argc, const char * argv[]) {
    
    int A, B;
    cin >> A >> B;

    cout << f(B)^f(A) << endl; 

    return 0;
}

ll f(ll A){
  if(A <= 0) return 0;
  ll cnt = (A+1) % 4;
  ll res = 0;
  for(ll i = A-cnt+1; i <= A; i++){
    if(i == A-cnt+1) res = i;
    else res ^= i;
  }
  return res;
}
 
int main(){
  ll A,B;
  cin >> A >> B;
  ll ans =  f(B) ^ f(A-1) ;
  cout << ans << endl;
}