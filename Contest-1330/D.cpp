#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
typedef long long ll;
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

int main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        ll d,m;
        cin>>d>>m;
        ll ans=1, val;
        for(int i=0;(i<32) && (d >= (1<<i));i++){
            val = min((1LL<<(i+1))-1, d);
            ans = (ans * ((val - (1LL<<i) + 2)%m))%m;
        }
        ans--;
        if(ans < 0) ans += m;
        cout << ans << '\n';
    }
    return 0;
}