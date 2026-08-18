#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    cin >> t;

    while(t--){
        cin >> n;
        int arr[n];
        int curr = 0, longest = 0;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        for(int i = 0;i < n; i++){
            if(arr[i] == 0){
                curr++;
            }else{
                longest = max(longest, curr);
                curr = 0;
            }

        }
        longest = max(longest, curr);
        cout << longest << endl;
    }

    return 0;
}