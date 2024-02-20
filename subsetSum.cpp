// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void combine(vector<int> &arr, vector<int> &ds, int ind, int currSum, int target, int n)
{
    if (ind == n)
    {
        if (currSum == target)
        {
            for (auto i : ds)
            {
                cout << i << " ";
            }
            cout << endl;
            return;
        }
    }
    ds.push_back(arr[ind]);
    currSum += arr[ind];
    combine(arr, ds, ind + 1, currSum, target, n);
    currSum -= arr[ind];
    ds.pop_back();
    combine(arr, ds, ind + 1, currSum, target, n);
}
int main()
{
    int n = 3, sum = 2;
    // Write C++ code here
    // std::cout << "Hello world!";
    vector<int> arr = {1, 2, 1};
    vector<int> ds;
    combine(arr, ds, 0, 0, sum, n);
    return 0;
}