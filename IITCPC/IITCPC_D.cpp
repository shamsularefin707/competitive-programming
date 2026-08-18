#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    string s1 = "codeforces";
    int missmatch = 0;

    int t;
    cin >> t;

    while(t--){
        cin >> s;
        missmatch = 0;

        for(int i = 0; i < s1.length(); i++){
            if(s[i] != s1[i]){
                missmatch++;
            }
        }
        cout << missmatch << endl;
    }

    return 0;
}