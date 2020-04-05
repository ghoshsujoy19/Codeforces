#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
typedef long long ll;
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

int main(){
    fastio;
    int n,m;
    cin>>n>>m;
    vector<ll> l(m), suff(m+1,0);
    for(int i=0;i<m;i++){
        cin >> l[i];
        if(i+l[i] > n) {
            cout << "-1\n";
            return 0;
        }
    }
    for(int i=m-1;i>=0;i--){
        suff[i] = suff[i+1] + l[i];
    }
    if(suff[0] < n) {
        cout << "-1\n";
        return 0;
    }

    for(ll i=1;i<=m;i++){
        cout << max(i, n-suff[i-1]+1) << " ";
    }
    cout << '\n';
    return 0;
}