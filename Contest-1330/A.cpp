#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
typedef long long ll;
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,v;
        cin >> n >> x;
        vector<bool> pre(205, false);
        int ans=0;
        for(int i=0;i<n;i++){
            cin >> v;
            pre[v] = true;
        } 
        for(int i=1;i<=204 && x>0; i++){
            if(!pre[i]){
                pre[i] = true;
                x--;
            }
        }
        for(int i=1;i<=204;i++){
            if(pre[i]) ans++;
            else break;
        }
        cout << ans << '\n';
    }
    return 0;
}