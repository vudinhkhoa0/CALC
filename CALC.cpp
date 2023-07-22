#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (int i = 1; i <= 2; i++)
    {
        int a, b, c;
        cin >> a >> b;
        if (a > b) swap(a, b);
        cin >> c;
        if (b > c) swap(b, c);
        if (a + b - c == 0) cout << "yes";
        else cout << "no";
        cout << endl;
    }
    return 0;

}

