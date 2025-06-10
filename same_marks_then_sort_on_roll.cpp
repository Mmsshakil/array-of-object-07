#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int mark;
};

bool camp(Student l, Student r)
{
    if (l.mark < r.mark) // check every mark and return true or false
    {
        return true;
    }
    else if (l.mark > r.mark)
    {
        return false;
    }
    else
    {
        if (l.roll < r.roll) // check every roll and return true or false
        {
            return true;
        }
        else if (l.roll > r.roll)
        {
            return false;
        }
    }
}

int main()
{
    int n;
    cin >> n;

    Student arr[n]; // make a array of object

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].roll >> arr[i].mark;
    }

    sort(arr, arr + n, camp); // sort here

    for (int i = 0; i < n; i++)
    {
        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].mark << endl;
    }

    return 0;
}