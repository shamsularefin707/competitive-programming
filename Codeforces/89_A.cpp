#include <bits/stdc++.h>
using namespace std;

int main(){
    string s,ans;
    cin >> s;

    int n = s.size();

    for(int i = 0; i < n; i++){
        if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'|| s[i] == 'Y' || s[i] == 'y'){
            continue;
        }
        else{
            ans += '.';
            ans += tolower(s[i]);
        }
    }
    cout << ans << endl;
    return 0;
}