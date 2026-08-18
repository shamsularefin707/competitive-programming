#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int count = 0;
    while(true){
        for(int j = 0; j < n; j++){
            if(arr[j] % 2 != 0){
                cout << count << endl;
                return 0;
            }
        }
        for(int j = 0; j < n; j++){
            arr[j] /= 2;
        }
        count++;
    }
    return 0;
}