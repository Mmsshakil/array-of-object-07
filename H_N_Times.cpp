#include <bits/stdc++.h>
using namespace std;

void times(int t, int finish)
{
    if (finish >= t)
    {
        return;
    }

    int n;
    char c;
    cin >> n >> c;

    for (int i = 0; i < n; i++)
    {
        cout << c << " ";
    }

    cout << endl;

    return times(t, finish + 1);
}

int main()
{
    int t;
    cin >> t;
    times(t, 0);
    return 0;
}