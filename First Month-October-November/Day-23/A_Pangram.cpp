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

#include <iostream>
#include <set>
#include <cctype>
    using namespace std;

    int main()
    {
        int n;
        string s;

        cin >> n;
        cin >> s;

        set<char> letters;

        for (char c : s)
        {
            letters.insert(tolower(c));
        }

        if (letters.size() == 26)
            cout << "YES\n";
        else
            cout << "NO\n";

        return 0;
    }

    return 0;
}