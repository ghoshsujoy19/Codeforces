#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
typedef long long ll;
#define fastio ios_base::sync_with_stdio(0), cin.tie(0)

bool check(vector<int> &arr, int l1, int l2){
    vector<bool> l1c(l1, false);
    vector<bool> l2c(l2, false);
    for(int i=0;i<l1;i++){
        if(arr[i] > l1) return false;
        if(l1c[arr[i]-1]) return false;
        l1c[arr[i]-1] = true;
    }

    for(int i=l1;i<(l1+l2);i++){
        if(arr[i] > l2) return false;
        if(l2c[arr[i]-1]) return false;
        l2c[arr[i]-1] = true;
    }

    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, maxm=0,cnt=0;
        cin>>n;
        bool f1=false, f2=false;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin >> arr[i];
            maxm = max(maxm, arr[i]);
        }
        if(check(arr, maxm, n-maxm)){
            cnt++;
            f1=true;
        }
        if(maxm != (n-maxm) && check(arr, n-maxm, maxm)){
            cnt++;
            f2=true;
        }

        cout << cnt << '\n';
        if(f1) cout << maxm << " " << (n-maxm) << "\n";
        if(f2) cout << (n-maxm) << " " << maxm << "\n";
    }
    return 0;
}