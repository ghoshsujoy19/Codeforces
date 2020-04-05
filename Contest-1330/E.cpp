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
        int h,g;
        cin>>h>>g;
        int n = (1<<h)-1;
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin>> arr[i];
        // TODO:
        // imp clue : arr[i] < arr[i/2]
        // to find, the minimum sum, along with the calls to achieve it
    }
    return 0;
}