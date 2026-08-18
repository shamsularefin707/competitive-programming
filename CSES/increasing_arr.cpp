#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long moves = 0;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 1; i < n; i++){
        if(arr[i-1] <= arr[i]) continue;
        else{
            moves += arr[i-1] - arr[i];
            arr[i] = arr[i - 1];
        }
    }
    cout << moves << endl;
    return 0;
}