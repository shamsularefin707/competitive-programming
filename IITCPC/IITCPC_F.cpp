#include <iostream>
using namespace std;
//MD. Shamsul Arefin
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;

        if(s == "abc") cout << "YES\n";
        else if(s == "acb") cout << "YES\n";
        else if(s == "bac") cout << "YES\n";
        else if(s == "cab") cout << "NO\n";
        else if(s == "bca") cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}