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
        cout << evenCount << " " << oddCount << endl;