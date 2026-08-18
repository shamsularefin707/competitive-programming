#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    long long ans = 0;

    for(int m = 0; m < (1 << n); m++){
        int x = 0; 
        for(int i = 0; i < n; i++){
            if(m & (1 << i)){
                x |= arr[i];
            }
        }
        ans += x;
    }
    cout << ans << endl;
    return 0;
}