#include <bits/stdc++.h>
using namespace std;

long long mod = 1000000007;

long long poww(long long a, long long b, long long m)
{
    long long ans = 1;

    while(b)
    {
        if(b % 2)
        {
            ans = (ans * a) % m;
        }

        a = (a * a) % m;
        b /= 2;
    }

    return ans;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long a,b,c;
        cin >> a >> b >> c;

        // first find b^c mod (mod-1)
        long long x = poww(b,c,mod-1);

        // then use that as the power of a
        long long ans = poww(a,x,mod);

        cout << ans << endl;
    }

    return 0;
}