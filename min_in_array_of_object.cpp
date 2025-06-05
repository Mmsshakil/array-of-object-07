#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int mark;
};

int main()
{
    int n;
    cin >> n;
    Student arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].roll >> arr[i].mark;
    }

    // need a mn object
    Student mn;
    mn.mark = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i].mark < mn.mark) // here we findout the min mark by object
        {
            mn = arr[i];
        }
    }

    cout << mn.name << " " << mn.roll << " " << mn.mark << endl;

    return 0;
}