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

    int n;
    string s;

    cin >> n;
    cin >> s;

    set<char> letters;

    for (char c : s)
    {
        letters.insert(tolower(c)); // character lowercase.
    }

    if (letters.size() == 26)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}