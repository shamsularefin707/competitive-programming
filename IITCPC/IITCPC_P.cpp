#include <bits/stdc++.h>
using namespace std;

int main(){

    int T;
    cin >> T;

    queue<int> q;

    while(T--){
        int x;
        cin >> x;

        if(x == 1){
            int n;
            cin >> n;
            q.push(n);
        }
        else if(x == 2){
            if(!q.empty())
                q.pop();
        }
        else{
            if(q.empty())
                cout << "Empty!\n";
            else
                cout << q.front() << '\n';
        }
    }

    return 0;
}