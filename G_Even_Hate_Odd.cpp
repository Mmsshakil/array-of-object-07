#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int arr[n], evenCount = 0, oddCount = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
            {
                evenCount++;
            }
            else
            {
                oddCount++;
            }
        }

        if ((evenCount + oddCount) % 2 != 0)
        {
            cout << "-1" << endl;
        }
        else if (evenCount == oddCount)
        {
            cout << "0" << endl;
        }
        else
        {
            if (evenCount > oddCount)
            {
                int result = (evenCount + oddCount) / 2;
                cout << evenCount - result << endl;
            }
            else
            {
                int result = (evenCount + oddCount) / 2;
                cout << oddCount - result << endl;
            }
        }
    }
    return 0;
}