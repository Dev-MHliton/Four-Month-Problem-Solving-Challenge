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

    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++) // don't using loop but i'm using loop.
    {
        s[0] = toupper(s[0]); // Only first character is uppercase.
    }

    cout << s << endl;

    return 0;
}