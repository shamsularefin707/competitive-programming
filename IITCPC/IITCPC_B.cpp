#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    int arr[3];
    int freq[2] = {0};

    cin >> t;
    while(t--){
        for(int i = 0; i < 3; i++){
            cin >> arr[i];
        }

        if(arr[0] == arr[1]) cout << arr[2] << endl;
        else if(arr[1] == arr[2]) cout << arr[0] << endl;
        else cout << arr[1] << endl;
    }
    return 0;
}