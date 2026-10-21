#include <bits/stdc++.h>
using namespace std;

#define fastio()                 \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define pii pair<int, int>

int main()
{
    fastio();

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int first = 0, last = 0;

        for (int i = 0; i < 3; i++)
        {
            first += s[i] - '0';
        }

        for (int i = 3; i < 6; i++)
        {
            last += s[i] - '0';
        }

        cout << (first == last ? "YES" : "NO") << '\n';
    }
    return 0;
}