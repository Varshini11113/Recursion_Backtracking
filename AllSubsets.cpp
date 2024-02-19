// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void subset(int i, vector<int> arr, int n, vector<int> &temp)
{
    if (i >= n)
    {
        for (auto i : temp)
        {
            cout << i << " ";
        }
        if (temp.size() == 0)
        {
            cout << "{}";
        }
        cout << "\n";
        return;
    }

    temp.push_back(arr[i]);
    subset(i + 1, arr, n, temp);
    temp.pop_back();
    subset(i + 1, arr, n, temp);
}
int main()
{
    int n = 3;
    vector<int> arr = {3, 2, 1};
    vector<int> temp;
    subset(0, arr, n, temp);
    return 0;
}

/*Output
3 2 1
3 2
3 1
3
2 1
2
1
{}
*/